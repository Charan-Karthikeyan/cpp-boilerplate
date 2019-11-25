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
 *  @file      PID.cpp
 *  @author    Charan Karthikeyan Parthasarathy Vasanthi
 *  @copyright MIT License.
 *  @brief   The implementation of the PID class with the inherited
 *  newPID class.
 */

#include <PID.hpp>

/*
 * @brief Implementation of the PID class.
 */
PID::PID() {
  kp = 1;
  kd = 1;
  ki = 1;
  dT = 1;
}

PID::PID(double Kp, double Ki, double Kd, double dt) {
  kp = Kp;
  ki = Ki;
  kd = Kd;
  dT = dt;
}

double PID::getKp() {
  return kp;
}

double PID::getKi() {
  return ki;
}

double PID::getKd() {
  return kd;
}

double PID::compute(double targetVelocity, double actualVal) {
  // Compute the error and the gains of the PID.
  double error = targetVelocity - actualVal;
  double error_kp = kp*error;
  double error_ki = ki*error * dT;
  double error_kd = kd*(error/dT);
  double final_error = error_kp + error_ki + error_kd;
  return final_error;
}

PID::~PID() {
}
