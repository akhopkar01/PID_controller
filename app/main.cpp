/**
 * Copyright 2020 <Aditya Khopkar> <Rajeshwar N S>
 * */

/**
 * @file: main.cpp
 * @brief: Contains the main function of the program
 * @author: Part 1 - Aditya Khopkar (driver), Rajeshwar N S (navigator)
 * @author: Part 2 - Spencer Elyard (driver), Daniel Sahu (navigator)
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
  double new_velocity = controller.Compute(4.0, 8.0);
  std::cout << "Actual Velocity: " << 4.0 << " Desired Velocity: " << 8.0
            << " New Velocity: " << new_velocity << std::endl;
  return 0;
}
