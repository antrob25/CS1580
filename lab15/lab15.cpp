// Programmer: ANTHONY ROBLES
// MST Username: argk4
// Instructor: Konda
// Section: a
// Date: 5/7/19
// File: lab15.cpp
// Purpose: This file outputs the fibonaci sequence

#include <iostream>

using namespace std;

// The Fibonaci() function outputs the fibonaci sequence to the screen.
// Pre: None.
// Post: Sequence outputed to screen.
void Fibonaci(int first, int second, const int range);

int main()
{
  int first, second, range;
  cout << "Enter the first number in the sequence\n";
  cin >> first;

  cout << "Enter the second number in the sequence\n";
  cin >> second;

  cout << "Enter the range:\n";
  cin >> range;
  Fibonaci(first, second, range);
  cout << endl;
  
  return 0;
}

void Fibonaci(int first, int second, const int range)
{
  cout << first << " " << second << " ";
  for (int i = 3; i <=range; i++) 
  { 
    if (i % 2 != 0) 
    {
      first+=second;
      cout << first << " ";
    }
    else
    {
      second+=first;
      cout << second << " ";
    }
  }
  return;
}
