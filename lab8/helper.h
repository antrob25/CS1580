// Programmar: ANTHONY ROBLES 
// Username: argk4
// Instructor: Konda
// Section: a
// Date: 3/12/19
// File: helper.h 
// Purpose: The file contains the template, pototypes, and structures for the
// program lab8.cpp.

#ifndef HELPER_H
#define HELPER_H
#include <iostream>
#include <cmath>

using namespace std;

// Prototpes

// The greet() function outputes a greetung to the screen.
// Pre: None.
// Post: The greeting is outputed to the screen.
  void greet();

// The signout() function outputes a goodbye to the screen.
// Pre: None.
// Post: The goodbye is outputed to the screen.
  void signout();


// Structures

// continuous point
struct point_float
{
  float m_x_coord;
  float m_y_coord;
};

// discrete point
struct point_int
{
  int m_x_coord;
  int m_y_coord;
};

// Templates

// The computeDistance() function computes the Euclidean distance for discrete
// and continuous points.
// Pre: 
// Post: 
  template <typename T>
  float computeDistance(T p1, T p2)
  {
    float distance, x_distance, y_distance;
    x_distance = pow((p1.m_x_coord - p2.m_x_coord), 2);
    y_distance = pow((p1.m_y_coord - p2.m_y_coord), 2);
    distance = sqrt((x_distance + y_distance));
    return distance;
  }

#endif
