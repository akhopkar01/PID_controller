# PID Controller (Test Driven Development)
[![Build Status](https://travis-ci.org/akhopkar01/PID_controller.svg?branch=master)](https://travis-ci.org/github/akhopkar01/PID_controller)
[![Coverage Status](https://coveralls.io/repos/github/akhopkar01/PID_controller/badge.svg?branch=master)](https://coveralls.io/github/akhopkar01/PID_controller?branch=master)
---

## Overview

This project is worked in groups to carry out TDD.

Author: 
[ Part 1 ] Aditya Khopkar (driver), Rajeshwar N S (navigator)
[ Part 2 ] Spencer Elyard (driver), Daniel Sahu (navigator)

## Standard install via command-line
```
git clone --recursive https://github.com/selyard/PID_controller
cd PID_controller
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```

## Building for code coverage (for assignments beginning in Week 4)
```
sudo apt-get install lcov
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make
make code_coverage
```
This generates a index.html page in the build/coverage sub-directory that can be viewed locally in a web browser.

## TO DO for future:
- Investigate additional test cases for PID controller
