/**
 * Copyright 2020 <Aditya Khopkar>
 * */

/**
 * @file: PID.h
 * @brief: Contains the class declaration of PID control
 * @author: Part 1 : Aditya Khopkar (driver)
 * */

#pragma once

namespace control {
class PID {
 private:
  double kp_;
  double ki_;
  double kd_;

 public:
  double setpoint_;
  double dt_;

  /**
   * @brief: Computes the new value of velocity given a setpoint and current
   * value
   * @param: feedback: double, setpoint: double
   * @return: new velocity: double
   * */
  double compute(double, double);

  /**
   * @brief: Implementation of constructor
   * @param: None
   * @return: None
   * */
  PID() : kp_{1.2}, ki_{0.4}, kd_{2.0}, dt_{0.1} {}

  /**
   * @brief: Destructor call of class
   * @param: None
   * @return: None
   * */
  virtual ~PID() {}
};
}  // namespace control