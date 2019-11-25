/*
 *  MIT License
 *
 *  Copyright (c) 2019 Charan Karthikeyan Parthasarathy Vasanthi
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a
 *  copy of this software and associated documentation files (the "Software"),
 *  to deal in the Software without restriction, including without
 *  limitation the rights to use, copy, modify, merge, publish, distribute,
 *  sublicense, and/or sell copies of the Software, and to permit persons to
 *  whom the Software is furnished to do so, subject to the following
 *  conditions:
 *
 *  The above copyright notice and this permission notice shall be included
 *  in all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 *  THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 *  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 *  DEALINGS IN THE SOFTWARE.
 */

/**
 *  @file      newPID.hpp
 *  @author    Charan Karthikeyan Parthasarathy Vasanthi
 *  @copyright MIT License.
 *  @brief   The declaration of the newPID class with virtual members.
 */

#ifndef INCLUDE_NEWPID_HPP_
#define INCLUDE_NEWPID_HPP_

#include <iostream>
/*
 * @brief Declaration of the variables and members of the newPID. class.
 */
class newPID{
 protected:
  // Declaration of the variables of the class
  double kp;
  double ki;
  double kd;
  double dT;

 public:
  /*
   * @brief Constructor for the newPID class.
   * @param None.
   * @return None.
   */
  newPID();
  /*
   * @brief Virtual Destructor for the newPID class
   * @param None.
   * @return None.
   */
  virtual ~newPID() {}
  /*
   * @brief Virtual function to compute the PID gain
   * @param target velocity given to the PID(targetVelocity).
   * @param The actual value given to the PID(actualVal).
   *
   */
  virtual double compute(double targetVelocity, double actualVal) = 0;
  /*
   * @brief Virtual function to set the value of Proportional Gain(Kp).
   * @param The value of the Proportional Gain(Kp).
   * @return The value set to the Proportional Gain(Kp).
   */
  virtual double setKp(double Kp);
  /*
   * @brief Virtual function to set the value of Integral Gain(Ki).
   * @param The value of the Integral Gain(Ki).
   * @return The value set to the Integral Gain(Ki).
   */
  virtual double setKi(double Ki);
  /*
   * @brief Virtual function to set the value of Differential Gain(Kd).
   * @param The value of the Differential Gain(Kd).
   * @return The value set to the Differential Gain(Kd).
   */

  virtual double setKd(double Kd);
};


#endif  // INCLUDE_NEWPID_HPP_ //
