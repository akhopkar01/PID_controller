/**
 * Copyright 2020 <Aditya Khopkar> <Rajeshwar N S>
 * */

/**
 * @file: PID.cpp
 * @brief: Contains the class definition of PID control
 * @author: Part 1 : Aditya Khopkar (driver), Rajeshwar N S (navigator)
 * */

#include "PID.h"

void control::PID::set_kp(double kp) { this->kp_ = kp; }

void control::PID::set_kd(double kd) { this->kd_ = kd; }

void control::PID::set_ki(double ki) { this->ki_ = ki; }

double control::PID::compute(double feedback, double setpoint) {
  // Stub Implementation
  // Not iterative

  return 0;
}

const double& control::PID::get_kp() { return this->kp_; }

const double& control::PID::get_kd() { return this->kd_; }

const double& control::PID::get_ki() { return this->ki_; }
