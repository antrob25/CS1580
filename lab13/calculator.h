// Programmer: ANTHONY ROBLES 
// Username: arrgk4
// Instructor Name: Konda
// Section: a
// Date: 4/23/19
// File: caculator.h
// Purpose: This program tests the functionality of the complex class and
// the calculator class.

#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <iostream>

using namespace std;

template <class data_type>
class calculator
{
  public:
    calculator(){}
    calculator(const data_type num1, const data_type num2);
    data_type add();   
    data_type subtract();
    template <class t>
    friend ostream& operator << (ostream& os, const calculator<t> &c);

  private:
    data_type m_num1, m_num2;
};

#include "calculator.hpp"
#endif
