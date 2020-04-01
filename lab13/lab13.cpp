// Programmer: ANTHONY ROBLES
// Username: arrgk4
// Instructor Name: Konda
// Section: a
// Date: 4/23/19
// File: lab13.cpp
// Purpose: This program tests the functionality of the complex class and
// the calculator class.

#include <iostream>
#include "calculator.h"
#include "complex.h"

using namespace std;

int main()
{
  // declarations
  complex a(2,4), b(1,2);
  calculator<float> one(30.3,20.7);
  calculator<int> two(100,30);
  calculator<complex> three(a,b);

  cout << "Two numbers are: " << one << endl;
  cout << "float addition result: " << one.add() << endl;
  cout << "float subtraction: " << one.subtract() << endl;
  cout << "Two numbers are: " << two << endl;
  cout << "Integer addition result: " << two.add() << endl;
  cout << "Integer subtraction result: " << two.subtract() << endl;
  cout << "Two numbers are: " << three << endl;
  cout << "Complex number addition result: " << three.add() << endl;
  cout << "Complex number subtraction result: " << three.subtract() << endl;

  return 0;
}
