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
 *  @file      gmockStatic.hpp
 *  @author    Charan Karthikeyan Parthasarathy Vasanthi
 *  @copyright MIT License.
 *  @brief   The declaration and implementation of the gmockStatic class.
 */
#ifndef TEST_GMOCKSTATIC_HPP_
#define TEST_GMOCKSTATIC_HPP_

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <memory>
#include "newPID.hpp"
/*
 * @brief gmockStatic class to call the functions from the newPID class.
 */
class gmockStatic : public ::testing::Test {
 public:
  /*
   * @brief Function to test the setKp function.
   * @param unique pointer to the newPID class
   * @return None.
   *
   */
  void set_Kp(std::unique_ptr<newPID> npid) {
    npid->setKp(3.0);
  }
  /*
   * @brief Function to test the setKd function.
   * @param unique pointer to the newPID class
   * @return None.
   *
   */
  void set_Kd(std::unique_ptr<newPID> npid) {
    npid->setKd(2.0);
  }
  /*
   * @brief Function to test the setKi function.
   * @param unique pointer to the newPID class
   * @return None.
   *
   */
  void set_Ki(std::unique_ptr<newPID> npid) {
    npid->setKi(1.0);
  }
  /*
   * @brief Function to test the compute function.
   * @param unique pointer to the newPID class
   * @return None.
   *
   */
  void compute(std::unique_ptr<newPID> npid) {
    npid->compute(0, 1);
  }
};

#endif /* TEST_GMOCKSTATIC_HPP_ */
