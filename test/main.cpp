/**
 * Copyright 2020 <Aditya Khopkar> <Rajeshwar N S>
 * */

/**
 * @file: main.cpp (test)
 * @brief: This file contains the main function to drive the tests for the
 * software
 * @author: Part 1 : Aditya Khopkar (driver), Rajeshwar N S (navigator)
 * */

#include <gtest/gtest.h>

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
