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
 *  @file      main.cpp
 *  @author    Charan Karthikeyan Parthasarathy Vasanthi
 *  @copyright MIT License.
 *  @brief   The implementation of the PID class with the newPID class.
 */

#include <iostream>
#include <memory>
#include "PID.hpp"
#include "newPID.hpp"

/*
 * @brief The main function
 * @param None.
 * @return Run status(int).
 */
int main() {
  // Initialize the object
  PID pid;
  // Pointer to the virtual class and create an object for it.
  std::unique_ptr<newPID> npid = std::make_unique<PID>();
  double targetVelocity, actualVal;
  // Get the values for the compute function.
  std::cout << "Enter the value of the targetVelocity : ";
  std::cin >> targetVelocity;
  std::cout << "Enter the value of the current Velocity : ";
  std::cin >> actualVal;
  // Setting the PID gains
  npid->setKp(1);
  npid->setKd(0.1);
  npid->setKi(2);
  // Compute the value of the PID gains.
  double computeVal = pid.compute(targetVelocity, actualVal);
  std::cout << "The output value from the compute function is" << computeVal
         << std::endl;
  return 0;
}
