#include "_config.h"
#include "_types.h"

#include "robot.h"

#ifndef MOTORS_H
#define MOTORS_H


class Motors{
public:
  // Average of both motors
  static float avgSpeed;

  // Initialize pins
  static void init();

  // Set power of both motors
  static void setPower(float m1, float m2);

  // Set state as Iddle (Turn off motors)
  static void stop();
};

#endif
