/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jry_3_BY_SYMPY_'                   *
 ******************************************************************************/
#include "../../include/baxter/jry_3.hpp"
#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void jry_3(double *q, double *out_3741419146169199556) {

   out_3741419146169199556[0] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0]) - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3]);
   out_3741419146169199556[1] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_3741419146169199556[2] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[2]);
   out_3741419146169199556[3] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1]) - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1]);
   out_3741419146169199556[4] = 0;
   out_3741419146169199556[5] = 0;
   out_3741419146169199556[6] = 0;
   out_3741419146169199556[7] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0]) + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3]);
   out_3741419146169199556[8] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_3741419146169199556[9] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[2]) + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[2]);
   out_3741419146169199556[10] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1]) - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3]) - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1]);
   out_3741419146169199556[11] = 0;
   out_3741419146169199556[12] = 0;
   out_3741419146169199556[13] = 0;
   out_3741419146169199556[14] = 0;
   out_3741419146169199556[15] = -sin(q[1])*sin(q[3])*cos(q[2]) + cos(q[1])*cos(q[3]);
   out_3741419146169199556[16] = -sin(q[2])*sin(q[3])*cos(q[1]);
   out_3741419146169199556[17] = -sin(q[1])*sin(q[3]) + cos(q[1])*cos(q[2])*cos(q[3]);
   out_3741419146169199556[18] = 0;
   out_3741419146169199556[19] = 0;
   out_3741419146169199556[20] = 0;

}
