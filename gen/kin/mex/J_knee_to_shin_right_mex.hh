/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:15:45 GMT-05:00
 */

#ifndef J_KNEE_TO_SHIN_RIGHT_MEX_HH
#define J_KNEE_TO_SHIN_RIGHT_MEX_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void J_knee_to_shin_right_mex_raw(double *p_output1, const double *var1);

  inline void J_knee_to_shin_right_mex(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 20, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 20);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_knee_to_shin_right_mex_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_KNEE_TO_SHIN_RIGHT_MEX_HH
