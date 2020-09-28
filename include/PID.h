/**
 * Copyright 2020 <Aditya Khopkar> <Rajeshwar N S>
 * */

/**
 * @file: PID.h
 * @brief: Contains the class declaration of PID control
 * @author: Part 1 : Aditya Khopkar (driver), Rajeshwar N S (navigator)
 * @author: Part 2 - Spencer Elyard (driver), Daniel Sahu (navigator)
 * */

#pragma once

namespace control {
class PID {
 private:
  double kp_;
  double ki_;
  double kd_;
  double dt_;
  double prev_error_;
  double integral_error_;

 public:
  /**
   * @brief: Setter for kp
   * @param: kp: double
   * @return: None
   * */
  void SetKp(double);

  /**
   * @brief: Setter for kd
   * @param: kd: double
   * @return: None
   * */
  void SetKd(double);

  /**
   * @brief: Setter for ki
   * @param: ki: double
   * @return: None
   * */
  void SetKi(double);

  /**
   * @brief: Computes the new value of velocity given a setpoint and current
   * value
   * @param: feedback: double, setpoint: double
   * @return: new velocity: double
   * */
  double Compute(double, double);

  /**
   * @brief: Getter for kp
   * @param: None
   * @return: const double value
   * */
  const double& GetKp();

  /**
   * @brief: Getter for kd
   * @param: None
   * @return: const double value
   * */
  const double& GetKd();

  /**
   * @brief: Getter for ki
   * @param: None
   * @return: const double value
   * */
  const double& GetKi();

  /**
   * @brief: Implementation of constructor
   * @param: None
   * @return: None
   * */
  PID();

  /**
   * @brief: Destructor call of class
   * @param: None
   * @return: None
   * */
  virtual ~PID();
};
}  // namespace control
