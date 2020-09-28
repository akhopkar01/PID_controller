/**
 * Copyright 2020 <Aditya Khopkar> <Rajeshwar N S>
 * */

/**
 * @file: test.cpp
 * @brief: This file contains the test functions to Unit test the software
 * @author: Part 1 : Aditya Khopkar (driver), Rajeshwar N S (navigator)
 * */

#include <gtest/gtest.h>

#include <iostream>

#include "PID.h"

// instance of the class
control::PID pid;

// temp value
double val = 1.4;

/**
 * @brief: Tests the compute method of the class by returning a double value,
 * should pass
 * Actual vel = 4.0, Desired vel = 8.0, kp, ki, kd, dt = [1.2, 0.4,
 * 0.2, 1]
 * */
TEST(PIDComputeTest, should_pass) {
  EXPECT_DOUBLE_EQ(7.2, pid.Compute(4.0, 8.0));
}

/**
 * @brief: tests setter for kp
 * */
TEST(PIDSetters, check_kp) {
  pid.SetKp(val);
  EXPECT_DOUBLE_EQ(val, pid.GetKp());
}

/**
 * @brief: tests setter for kd
 * */
TEST(PIDSetters, check_kd) {
  pid.SetKd(val);
  EXPECT_DOUBLE_EQ(val, pid.GetKd());
}

/**
 * @brief: tests setter for ki
 * */
TEST(PIDSetters, check_ki) {
  pid.SetKi(val);
  EXPECT_DOUBLE_EQ(val, pid.GetKi());
}
