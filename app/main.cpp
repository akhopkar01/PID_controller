/**
 * Copyright 2020 <Aditya Khopkar>
 * */

/**
 * @file: main.cpp
 * @brief: Contains the main function of the program
 * @author: Part 1 - Aditya Khopkar (driver)
 * */

#include <iostream>
#include <vector>

#include "PID.h"

/**
 * @brief: main function
 * @param: None
 * @return: 0
 * */
int main() {
  // create instance of PID
  control::PID controller;

  // get output
  double new_velocity = controller.compute(1.2, 2.5);
  std::cout << new_velocity << std::endl;
  return 0;
}