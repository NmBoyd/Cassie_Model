/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:35:59 GMT-05:00
 */

#ifndef J_VECTORNAV_TO_PELVIS_MEX_HH
#define J_VECTORNAV_TO_PELVIS_MEX_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void J_VectorNav_to_Pelvis_mex_raw(double *p_output1, const double *var1);

  inline void J_VectorNav_to_Pelvis_mex(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 14, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 14);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_VectorNav_to_Pelvis_mex_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_VECTORNAV_TO_PELVIS_MEX_HH