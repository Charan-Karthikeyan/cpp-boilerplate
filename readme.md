# PID Controller with GMOCK
[![Build Status](https://travis-ci.org/Charan-Karthikeyan/cpp-boilerplate.svg?branch=GMock_Extra_Credit)](https://travis-ci.org/Charan-Karthikeyan/cpp-boilerplate)
[![Coverage Status](https://coveralls.io/repos/github/Charan-Karthikeyan/cpp-boilerplate/badge.svg?branch=GMock_Extra_Credit)](https://coveralls.io/github/Charan-Karthikeyan/cpp-boilerplate?branch=GMock_Extra_Credit)
---

## Authors
Charan Karthikeyan Parthasarathy Vasanthi

## Overview

This branch is to show the usage of GMock test on a PID controller. The dependencies are 
cmake
gtest
gmock

## GMock Test
For the GMock Test we create a virtual class "newPID". This is to test the GMock framework with C++. The virtual class is is then inherited by the PID class and compute function is used.
The mockTest file in the test folder consists of the gmock methods to test the class. 
The Cmake lists in the test folder and the main CMakeList is changed to include the GMock folder and the dependencies for them.

## Standard install via command-line
```
git clone <repository>
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```

## Cpplint check
```
cd  <path to repository>
cpplint $( find . -name \*.hpp -or -name \*.cpp | grep -vE -e "^./build/" -e "^./vendor/" -e "^./docs/" -e "^./results" )
```

## Cppcheck check
```
cd <path to repository>
cppcheck --enable=all --std=c++11 -I include/ --suppress=missingIncludeSystem $( find . -name *.cpp | grep -vE -e "^./build/" -e "^./vendor/" )
```


