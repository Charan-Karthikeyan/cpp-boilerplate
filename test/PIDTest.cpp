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
 *  @file      PIDTest.cpp
 *  @author    Charan Karthikeyan Parthasarathy Vasanthi
 *  @copyright MIT License.
 *  @brief   The implementation of the test classes for the googlemock.
 */


#include <iostream>
#include "gmock/gmock.h"
#include "mockTest.hpp"
#include "newPID.hpp"
#include "PID.hpp"
#include "gmockStatic.hpp"
#include "gtest/gtest.h"

using ::testing::AtLeast;
using ::testing::Return;
using ::testing::_;

/*
 * @brief Test case for the setKp function using mock.
 * @param None.
 * @return None.
 */
TEST(gmockStatic, testSetKpFunc) {
  PID pid;
  std::unique_ptr<mockTest> mpid(new mockTest);
  std::unique_ptr<gmockStatic> gmock;
  EXPECT_CALL(*mpid, setKp(3.0)).Times(1).WillOnce(Return(3.0));
  EXPECT_EQ(1, pid.getKp());
  gmock->set_Kp(std::move(mpid));
  EXPECT_EQ(2, pid.setKp(2));
}
/*
 * @brief Test case for the setKi function using mock.
 * @param None.
 * @return None.
 */

TEST(gmockStatic, testSetKiFunc) {
  PID pid;
  std::unique_ptr<mockTest> mpid(new mockTest);
  std::unique_ptr<gmockStatic> gmock;
  EXPECT_CALL(*mpid, setKi(1.0)).Times(1).WillOnce(Return(1.0));
  EXPECT_EQ(1.0, pid.getKi());
  gmock->set_Ki(std::move(mpid));
  EXPECT_EQ(1.0, pid.setKi(1.0));
}
/*
 * @brief Test case for the setKd function using mock.
 * @param None.
 * @return None.
 */
TEST(gmockStatic, testSetKdFunc) {
  PID pid;
  std::unique_ptr<mockTest> mpid(new mockTest);
  std::unique_ptr<gmockStatic> gmock;
  EXPECT_CALL(*mpid, setKd(2.0)).Times(1).WillOnce(Return(2.0));
  EXPECT_EQ(1, pid.getKd());
  gmock->set_Kd(std::move(mpid));
  EXPECT_EQ(1.2, pid.setKd(1.2));
}
/*
 * @brief Test case for the compute function using mock.
 * @param None.
 * @return None.
 */
TEST(gmockStatic, testComputeFunc) {
  PID pid;
  std::unique_ptr<mockTest> mpid(new mockTest);
  std::unique_ptr<gmockStatic> gmock;
  EXPECT_CALL(*mpid, compute(0.0, 1.0)).Times(1).WillOnce(Return(0.0));
  gmock->compute(std::move(mpid));
  double gainVal = pid.compute(0.0, 1.0);
  EXPECT_NEAR(-3, gainVal, 1);
}
/*
 * @brief Unit test of the PID class and the set values.
 * @param None.
 * @return None.
 */

TEST(PIDTest, testGainsFunc) {
  mockTest gmock;
  PID pid(3, 2, 4, 0.5);
  EXPECT_EQ(3, pid.getKp());
  EXPECT_EQ(2, pid.getKi());
  EXPECT_EQ(4, pid.getKd());
}
