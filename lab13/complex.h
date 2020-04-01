// Programmer: ANTHONY ROBLES
// Username: arrgk4
// Instructor Name: Konda
// Section: a
// Date: 4/23/19
// File: complex.h
// Purpose: This program tests the functionality of the complex class and 
// the calculator class.

#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

using namespace std;

class complex
{
  public:
    complex(const double real = 0, const double imaginary = 0)
            : m_real(real), m_imaginary(imaginary){}    
    complex operator +(const complex &num)const;
    complex operator -(const complex &num)const;
    friend ostream& operator <<(ostream& os, const complex& i);
  private:
    double m_real;
    double m_imaginary;
};

#endif
