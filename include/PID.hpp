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
 *  @file      PID.hpp
 *  @author    Charan Karthikeyan Parthasarathy Vasanthi
 *  @copyright MIT License.
 *  @brief   The declaration of the PID class with the newPID class.
 */

#ifndef INCLUDE_PID_HPP_
#define INCLUDE_PID_HPP_

#include <iostream>
#include "newPID.hpp"
/**
 * @brief Class declaration for the PID class with the inherited class.
 *
 */
class PID : public newPID {
 public:
  /*
   * @brief Constructor for the PID class.
   * @param None.
   * @return None.
   */
  PID();
  /*
     * @brief Constructor for the PID class with the initialization
     * for the gains and time diff.
     * @param Proportional Gain(Kp)
     * @param Integral Gain(Ki)
     * @param Differential Gain(Kd)
     * @param Time Step(dt)
     * @return None.
     */
  PID(double Kp, double Ki, double Kd, double dt);
  /*
   * @brief Destructor for the PID class
   * @param None.
   * @return None.
   */
  ~PID();
  /*
   * @brief Function to get the value of Proportional Gain(Kp)
   * @param None.
   * @return Proportional Gain(Kp)
   */
  double getKp();
  /*
   * @brief Function to get the value of Integral Gain(Ki)
   * @param None.
   * @return Integral Gain(Ki)
   */
  double getKi();
  /*
   * @brief Function to get the value of Differential Gain(Kd)
   * @param None.
   * @return Differential Gain(Kd)
   */
  double getKd();
  /*
   * @brief Function to compute the gain value of the PID
   * @param The targetVelocity(targetVelocity)
   * @parma The actual value(actualVal)
   */
  double compute(double targetVelocity, double actualVal);
};

#endif /* INCLUDE_PID_HPP_ */
