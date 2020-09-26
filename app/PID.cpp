/**
 * Copyright 2020 <Aditya Khopkar> <Rajeshwar N S>
 * */

/**
 * @file: PID.cpp
 * @brief: Contains the class definition of PID control
 * @author: Part 1 : Aditya Khopkar (driver), Rajeshwar N S (navigator)
 * @author: Part 2 - Spencer Elyard (driver), Daniel Sahu (navigator)
 * */

#include "PID.h"

// constructor
control::PID::PID() {
          kp_ = 1.2;
          ki_ = 0.4;
          kd_ = 0.2;
          dt_ = 1;
          prev_error_ = 0.0;
          integral_error_ = 0.0;
}

void control::PID::set_kp(double kp) { this->kp_ = kp; }

void control::PID::set_kd(double kd) { this->kd_ = kd; }

void control::PID::set_ki(double ki) { this->ki_ = ki; }

double control::PID::compute(double feedback, double setpoint) {
  // calculate current error
  double currentError = setpoint - feedback;
  // Proportional controller portion
  double proportional = kp_ * currentError;
  // Integral controller portion
  double integral = ki_ * (integral_error_ + currentError*dt_);
  // Derivative
  double derivative = kd_ * ((currentError - prev_error_) / dt_);
  // calculate output
  double output = proportional + integral + derivative;
  // save error as previous prev_error_
  prev_error_ = currentError;
  return output;
}

const double& control::PID::get_kp() { return this->kp_; }

const double& control::PID::get_kd() { return this->kd_; }

const double& control::PID::get_ki() { return this->ki_; }

// destructor
control::PID::~PID() {
}
