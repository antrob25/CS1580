// Programmer: Anthony Robles                               Date: 3/5/19
// File: lab6.cpp                        Class: Instructor Konda section a
// Purpose: This program computes the largest of three number and assigns the
// largest number to the first number.

#include <iostream>

using namespace std;

// function prototypes

// The function greeting() outputs a greeting to the screen.
// Pre: None
// Post: The message is outputed to the screen.
void greeting();

// The function find_largest() computes the largest number of three numbers.
// Pre: None
// Post: The largest number is passed to the calling function by reference.
void find_largest(int & num1, int num2, int num3);

// The function find_largest() computes the largest number of the three numbers
// passed to the function
// Pre: None
// Post: The largest number is passed to the calling function by reference.
void find_largest(float & num1, float num2, float num3);

int main()
{
  int number1 = 2, number2 = 5, number3 = 15;
  float float1 = 17.9, float2 = 24.3, float3 = 29.4;

  greeting();

  cout<<"1st number before assignment (smallest of the three):"<<number1<<endl
      <<"2nd number before assignment:"<<number2<<endl
      <<"3rd number before assignment:"<<number3<<endl<<endl;

  find_largest(number1, number2, number3);

  cout<<"After assignment, number1 will have the largest of the three values:\n"
      <<"Value of num1 is "<<number1<<endl<<endl;

  cout<<"1st float before assignment (smallest of the three):"<<float1<<endl
      <<"2nd float before assignment:"<<float2<<endl
      <<"3rd float before assignment:"<<float3<<endl<<endl;

  find_largest(float1, float2, float3);

  cout<<"After assignment, float1 will have the largest of the three values:\n"
      <<"Value in float1 is: "<<float1<<endl;

  return 0;
}

void greeting()
{
  cout<<"\tHello!\n";
  return;
}

void find_largest(int & num1, int num2, int num3)
{
  int ans, big, ans2;
  ans = num1 / num2;
  if (!(ans == 0))
     big = num1;
  else
     big = num2;
  ans2 = big / num3;
  if (!(ans2 == 0))
     num1 = big;
  else
  { 
    big = num3;
    num1 = big;
  }
  return;
}

void find_largest(float & num1, float num2, float num3)
{
  float ans, ans2, big;
  ans = num1 / num2;
  if (ans > 1)
     big = num1;
  else 
     big = num2;
  ans2 = big / num3;
  if (ans2 > 1)
     num1 = big;
  else
  {
    big = num3;
    num1 = big;
  }
  return;
}
