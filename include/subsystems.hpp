#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

// Intake on port 10
inline pros::Motor intake(10, pros::v5::MotorGears::blue, pros::v5::MotorUnits::degrees);

// Pulley: two 5.5W motors on one axle, facing each other, so 18 is reversed
inline pros::MotorGroup pulley({17, -18});

// Claw: one 5.5W motor on port 11 (make it -11 if open/close are backwards)
inline pros::Motor claw(11);

// Arm: one 5.5W motor on port 12, the claw is mounted on it (make it -12 if up/down are backwards)
inline pros::Motor arm(12);

// inline pros::adi::DigitalIn limit_switch('A');