#include <gtest/gtest.h>

#include <iostream>

#include "PID.h"

TEST(PIDControllerTest, should_pass) {
  control::PID pid;
  ASSERT_NEAR(6, pid.compute(4.0, 8.0), 0.2);
}
