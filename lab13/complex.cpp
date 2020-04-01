// Programmer: ANTHONY ROBLES
// Username: arrgk4
// Instructor Name: Konda
// Section: a
// Date: 4/23/19
// File: complex.cpp
// Purpose: This program tests the functionality of the complex class and
// the calculator class.

#include "complex.h"

complex complex::operator +(const complex & num)const
{
  complex temp;
  temp.m_real = m_real + num.m_real;
  temp.m_imaginary = m_imaginary + num.m_imaginary;
  return temp;
}

complex complex::operator -(const complex & num)const
{
  complex temp;
  temp.m_real = m_real - num.m_real;
  temp.m_imaginary = m_imaginary - num.m_imaginary;
  return temp;
}

ostream& operator <<(ostream& os, const complex& i)
{
  os << "(" << i.m_real << ", " << i.m_imaginary << "*i)";
  return os;
}
