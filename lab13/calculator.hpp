// Programmer: ANTHONY ROBLES
// Username: arrgk4
// Instructor Name: Konda
// Section: a
// Date: 4/23/19
// File: calculator.hpp
// Purpose: This program tests the functionality of the complex class and
// the calculator class.

template <class data_type>
calculator<data_type>::calculator(const data_type num1, const data_type num2)
{
  m_num1 = num1;
  m_num2 = num2;
}

template <class data_type>
data_type calculator<data_type>::add()
{
  return m_num1 + m_num2;
}

template <class data_type>
data_type calculator<data_type>::subtract()
{
  return m_num1 - m_num2;
}

template <class t>
ostream& operator << (ostream& os, const calculator<t> &c)
{
  os << c.m_num1 << ", " << c.m_num2; 
  return os;
}
