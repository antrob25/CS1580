// Programmer: ANTHONY ROBLES
// Username: argk4
// Instructor: Konda 
// Date: 4/16/19
// Section: a
// File: lab12.cpp
// Purpose: This program computes the equivalency of two fractions, the sum, 
// and the quiotent. 

#include <iostream>

using namespace std;

//
// Pre: None
// Post:

//
// Pre: None.
// Post:

//
// Pre: None.
// Post: 

// The operator +() function returns the sum of two fractions to the calling 
// function.
// Pre: None.
// Post: The sum of the fractions are returned to the calling function.
class fraction
{
  public:
    // constructors
    fraction() : m_num(0), m_den(1){}
    fraction(const int n) : m_num(n), m_den(1){}
    fraction(const int n, const int d) : m_num(n), m_den(d){}
    // member functions
    fraction operator /(const fraction & rhs);
    // friends functions
    friend ostream & operator <<(ostream & os, const fraction & rhs);
    friend bool operator ==(const fraction & lhs, const fraction & rhs);
    friend fraction operator +(const fraction & lhs, const fraction & rhs);
  private:
    int m_num;
    int m_den;

};



int main()
{
  fraction f(1,2), g(3,6);

  cout << "Fraction one has value: " << f << endl;
  cout << "Fraction one has value: " << g << endl;
  if (f == g)
    cout << "The two fractions are equivalent! " << endl;
  else
    cout << "The two fractions are not equivalent! " << endl;
  cout << "Fraction one divided by fraction two is: " << f/g << endl;
  cout << "The sum of the two fractions is: " << f+g << endl;

  return 0;
}

fraction fraction::operator /(const fraction & rhs)
{ 
  fraction f;
  f.m_num = m_num * rhs.m_den;
  f.m_den = m_den * rhs.m_num;
  return f;
}

ostream & operator <<(ostream & os, const fraction & rhs)
{
  os << rhs.m_num << "/" << rhs.m_den;
  return os;
}

bool operator ==(const fraction & lhs, const fraction & rhs)
{
  bool isequal = false;
  if (lhs.m_num*rhs.m_den == lhs.m_den*rhs.m_num)
    isequal = true;
  return isequal;
}

fraction operator +(const fraction & lhs, const fraction & rhs)
{
  fraction f;
  int temp, temp2;
  f.m_den = lhs.m_den * rhs.m_den;
  temp = lhs.m_num * rhs.m_den;
  temp2 = rhs.m_num * lhs.m_den;
  f.m_num = temp + temp2;
  return f;
}
