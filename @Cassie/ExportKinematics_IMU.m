function ExportKinematics_IMU(obj, export_function, export_path)
% Computes the Forward Kinematics to be used for state estimation (IMU to contact)
%
%   Author: Ross Hartley
%   Date:   11/15/2017
%
% Encoder Vector
encoders = SymVariable(obj.States.x(7:end));

% Frames
body_frame = CoordinateFrame(...
    'Name','Body',...
    'Reference',obj.Joints(getJointIndices(obj,'BaseRotX')),...
    'Offset',[0, 0, 0],...
    'R',[0, 0, 0]);

H_WB = body_frame.computeForwardKinematics;
H_WR = obj.ContactPoints.RightToeBottom.computeForwardKinematics;
H_WL = obj.ContactPoints.LeftToeBottom.computeForwardKinematics;
H_WC = obj.OtherPoints.MultisenseLeftCameraOpticalFrame.computeForwardKinematics;
H_WI1 = obj.OtherPoints.VectorNav.computeForwardKinematics;
H_WI2 = obj.OtherPoints.MultisenseAccelerometerFrame.computeForwardKinematics;

H_I1B = H_WI1\H_WB; H_I1B = subs(H_I1B, obj.States.x(1:6), zeros(6,1));
H_I1R = H_WI1\H_WR; H_I1R = subs(H_I1R, obj.States.x(1:6), zeros(6,1));
H_I1L = H_WI1\H_WL; H_I1L = subs(H_I1L, obj.States.x(1:6), zeros(6,1));
H_I1C = H_WI1\H_WC; H_I1C = subs(H_I1C, obj.States.x(1:6), zeros(6,1));

H_I2B = H_WI2\H_WB; H_I2B = subs(H_I2B, obj.States.x(1:6), zeros(6,1));
H_I2R = H_WI2\H_WR; H_I2R = subs(H_I2R, obj.States.x(1:6), zeros(6,1));
H_I2L = H_WI2\H_WL; H_I2L = subs(H_I2L, obj.States.x(1:6), zeros(6,1));
H_I2C = H_WI2\H_WC; H_I2C = subs(H_I2C, obj.States.x(1:6), zeros(6,1));

H_RL = H_WR\H_WL; H_RL = subs(H_RL, obj.States.x(1:6), zeros(6,1));
H_LR = H_WL\H_WR; H_LR = subs(H_LR, obj.States.x(1:6), zeros(6,1));

% Base to Left Contact Manipulator Jacobian
joints = obj.Joints(7:13);
joint_frames = cell(1,length(joints));
for i = 1:length(joints)
    joint_frames{i} = CoordinateFrame(...
        'Name',joints(i).Name,...
        'Reference',joints(i),...
        'Offset',[0, 0, 0],...
        'R',[0, 0, 0]);
end
J_I1L = Compute_Manipulator_Jacobian({obj.OtherPoints.VectorNav, joint_frames{:}, obj.ContactPoints.LeftToeBottom}, obj.States.x);                     J_I1L = [J_I1L, SymExpression(zeros(6,7))];
J_I2L = Compute_Manipulator_Jacobian({obj.OtherPoints.MultisenseAccelerometerFrame, joint_frames{:}, obj.ContactPoints.LeftToeBottom}, obj.States.x);  J_I2L = [J_I2L, SymExpression(zeros(6,7))];

% Base to Right Contact Manipulator Jacobian
joints = obj.Joints(14:end);
joint_frames = cell(1,length(joints));
for i = 1:length(joints)
    joint_frames{i} = CoordinateFrame(...
        'Name',joints(i).Name,...
        'Reference',joints(i),...
        'Offset',[0, 0, 0],...
        'R',[0, 0, 0]);
end
J_I1R = Compute_Manipulator_Jacobian({obj.OtherPoints.VectorNav, joint_frames{:}, obj.ContactPoints.RightToeBottom}, obj.States.x);                    J_I1R = [SymExpression(zeros(6,7)), J_I1R];
J_I2R = Compute_Manipulator_Jacobian({obj.OtherPoints.MultisenseAccelerometerFrame, joint_frames{:}, obj.ContactPoints.RightToeBottom}, obj.States.x); J_I2R = [SymExpression(zeros(6,7)), J_I2R];

% --- Right Contact to Left Contact Manipulator Jacobian ---

% Manipulator Jacobian transformation to new frame
% Jw_21 = R_21 * (-Jw_12)
% Jv_21 = R_21 * (-Jv_12 - (p_12)^*Jw_12)
Adj = @(R, p) [R, zeros(3); Angles.skew(p)*R, R];
R_21 = H_I1L(1:3,1:3).';
p2_12 = H_I1L(1:3,1:3).'*[H_I1L(1,end);H_I1L(2,end);H_I1L(3,end)];
J_LI1 = Adj(R_21, p2_12) *(-J_I1L);

% Compute new Jacobian by composition
% Jw_LR = Jw_LB + (R_LB * Jw_BR)
% Jv_LR = Jv_LB + (R_LB * Jv_BR) - ((R_LB*p_BR)^ * Jw_LB)
J_LR = [J_LI1(1:3,:) + H_I1L(1:3,1:3).'*J_I1R(1:3,:); ...
        J_LI1(4:6,:) + H_I1L(1:3,1:3).'*J_I1R(4:6,:) - Angles.skew(H_I1L(1:3,1:3).'*[H_I1R(1,end);H_I1R(2,end);H_I1R(3,end)]) * J_LI1(1:3,:)];

    
% --- Left Contact to Right Contact Manipulator Jacobian ---

% Manipulator Jacobian transformation to new frame
% Jw_21 = R_21 * (-Jw_12)
% Jv_21 = R_21 * (-Jv_12 - (p_12)^*Jw_12)
Adj = @(R, p) [R, zeros(3); Angles.skew(p)*R, R];
R_21 = H_I1R(1:3,1:3).';
p2_12 = H_I1R(1:3,1:3).'*[H_I1R(1,end);H_I1R(2,end);H_I1R(3,end)];
J_RI1 = Adj(R_21, p2_12) *(-J_I1R);

% Compute new Jacobian by composition
% Jw_RL = Jw_RB + (R_RB * Jw_BL)
% Jv_RL = Jv_RB + (R_RB * Jv_BL) - ((R_RB*p_BL)^ * Jw_RB)
J_RL = [J_RI1(1:3,:) + H_I1R(1:3,1:3).'*J_I1L(1:3,:); ...
        J_RI1(4:6,:) + H_I1R(1:3,1:3).'*J_I1L(4:6,:) - Angles.skew(H_I1R(1:3,1:3).'*[H_I1L(1,end);H_I1L(2,end);H_I1L(3,end)]) * J_RI1(1:3,:)];
 
   
% Export Functions
export_function(H_I1B, 'H_VectorNav_to_Pelvis', export_path, encoders);
export_function(H_I1B(1:3,1:3), 'R_VectorNav_to_Pelvis', export_path, encoders);
export_function(H_I1B(1:3,end), 'p_VectorNav_to_Pelvis', export_path, encoders);

export_function(H_I1R, 'H_VectorNav_to_RightToeBottom', export_path, encoders);
export_function(H_I1R(1:3,1:3), 'R_VectorNav_to_RightToeBottom', export_path, encoders);
export_function(H_I1R(1:3,end), 'p_VectorNav_to_RightToeBottom', export_path, encoders);
export_function(J_I1R, 'J_VectorNav_to_RightToeBottom', export_path, encoders);
export_function(J_I1R(1:3,:), 'Jw_VectorNav_to_RightToeBottom', export_path, encoders);
export_function(J_I1R(4:6,:), 'Jv_VectorNav_to_RightToeBottom', export_path, encoders);

export_function(H_I1L, 'H_VectorNav_to_LeftToeBottom', export_path, encoders);
export_function(H_I1L(1:3,1:3), 'R_VectorNav_to_LeftToeBottom', export_path, encoders);
export_function(H_I1L(1:3,end), 'p_VectorNav_to_LeftToeBottom', export_path, encoders);
export_function(J_I1L, 'J_VectorNav_to_LeftToeBottom', export_path, encoders);
export_function(J_I1L(1:3,:), 'Jw_VectorNav_to_LeftToeBottom', export_path, encoders);
export_function(J_I1L(4:6,:), 'Jv_VectorNav_to_LeftToeBottom', export_path, encoders);

export_function(H_I1C, 'H_VectorNav_to_MultisenseLeftOpticalFrame', export_path, encoders);
export_function(H_I1C(1:3,1:3), 'R_VectorNav_to_MultisenseLeftOpticalFrame', export_path, encoders);
export_function(H_I1C(1:3,end), 'p_VectorNav_to_MultisenseLeftOpticalFrame', export_path, encoders);

export_function(H_I2B, 'H_Multisense_to_Pelvis', export_path, encoders);
export_function(H_I2B(1:3,1:3), 'R_Multisense_to_Pelvis', export_path, encoders);
export_function(H_I2B(1:3,end), 'p_Multisense_to_Pelvis', export_path, encoders);

export_function(H_I2R, 'H_MultisenseIMU_to_RightToeBottom', export_path, encoders);
export_function(H_I2R(1:3,1:3), 'R_MultisenseIMU_to_RightToeBottom', export_path, encoders);
export_function(H_I2R(1:3,end), 'p_MultisenseIMU_to_RightToeBottom', export_path, encoders);
export_function(J_I2R, 'J_MultisenseIMU_to_RightToeBottom', export_path, encoders);
export_function(J_I2R(1:3,:), 'Jw_MultisenseIMU_to_RightToeBottom', export_path, encoders);
export_function(J_I2R(4:6,:), 'Jv_MultisenseIMU_to_RightToeBottom', export_path, encoders);

export_function(H_I2L, 'H_MultisenseIMU_to_LeftToeBottom', export_path, encoders);
export_function(H_I2L(1:3,1:3), 'R_MultisenseIMU_to_LeftToeBottom', export_path, encoders);
export_function(H_I2L(1:3,end), 'p_MultisenseIMU_to_LeftToeBottom', export_path, encoders);
export_function(J_I2L, 'J_MultisenseIMU_to_LeftToeBottom', export_path, encoders);
export_function(J_I2L(1:3,:), 'Jw_MultisenseIMU_to_LeftToeBottom', export_path, encoders);
export_function(J_I2L(4:6,:), 'Jv_MultisenseIMU_to_LeftToeBottom', export_path, encoders);

export_function(H_I2C, 'H_MultisenseIMU_to_MultisenseLeftOpticalFrame', export_path, encoders);
export_function(H_I2C(1:3,1:3), 'R_MultisenseIMU_to_MultisenseLeftOpticalFrame', export_path, encoders);
export_function(H_I2C(1:3,end), 'p_MultisenseIMU_to_MultisenseLeftOpticalFrame', export_path, encoders);

export_function(H_RL, 'H_RightToeBottom_to_LeftToeBottom', export_path, encoders);
export_function(H_RL(1:3,1:3), 'R_RightToeBottom_to_LeftToeBottom', export_path, encoders);
export_function(H_RL(1:3,end), 'p_RightToeBottom_to_LeftToeBottom', export_path, encoders);
export_function(J_RL, 'J_RightToeBottom_to_LeftToeBottom', export_path, encoders);
export_function(J_RL(1:3,:), 'Jw_RightToeBottom_to_LeftToeBottom', export_path, encoders);
export_function(J_RL(4:6,:), 'Jv_RightToeBottom_to_LeftToeBottom', export_path, encoders);

export_function(H_LR, 'H_LeftToeBottom_to_RightToeBottom', export_path, encoders);
export_function(H_LR(1:3,1:3), 'R_LeftToeBottom_to_RightToeBottom', export_path, encoders);
export_function(H_LR(1:3,end), 'p_LeftToeBottom_to_RightToeBottom', export_path, encoders);
export_function(J_LR, 'J_LeftToeBottom_to_RightToeBottom', export_path, encoders);
export_function(J_LR(1:3,:), 'Jw_LeftToeBottom_to_RightToeBottom', export_path, encoders);
export_function(J_LR(4:6,:), 'Jv_LeftToeBottom_to_RightToeBottom', export_path, encoders);


end


function J = Compute_Manipulator_Jacobian( frames, x )
% Computes Manipulator Jacobian for a series of frames
%   
%   Author: Ross Hartley
%   Date:   11/14/2017
%   

N = length(frames)-1;
Hw1 = frames{1}.computeForwardKinematics;
HwN1 = frames{N+1}.computeForwardKinematics;
H1N1 = Hw1\HwN1;

for i = 1:(N-1)
    Hwi1 = frames{i+1}.computeForwardKinematics;
    H1i1 = Hw1\Hwi1;
    
    % Used for computing manipulator jacobian
    zi = H1i1(1:3,1:3)*frames{i+1}.Reference.Axis';
    On = H1N1(1:3,end);
    Oi = H1i1(1:3,end);

    % Build Covariance Matrix
    if i == 1
        Jv = cross(zi', On - Oi)';
        Jw = zi;
    else
        Jv = [Jv, cross(zi', On - Oi)'];
        Jw = [Jw, zi];
    end
end
Jv = subs(Jv, x(1:6), zeros(6,1));
Jw = subs(Jw, x(1:6), zeros(6,1));
J = [Jw; Jv];

end
