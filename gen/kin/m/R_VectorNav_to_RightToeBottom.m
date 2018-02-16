function [output1] = R_VectorNav_to_RightToeBottom(var1)
    if coder.target('MATLAB')
        [output1] = R_VectorNav_to_RightToeBottom_mex(var1);
    else
        coder.cinclude('R_VectorNav_to_RightToeBottom_src.h');
        
        output1 = zeros(3, 3);

        
        coder.ceval('R_VectorNav_to_RightToeBottom_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end