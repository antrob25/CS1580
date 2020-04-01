//  Programmer: ANTHONY ROBLES    Username: argk4             Date: 02/12/2019
//  File: lab4.cpp                     Class: section a   instructor: Konda 
//  Purpose: A program that sums even numbers, numbers ending with 3, and
//  numbers ending with 5 

#include <iostream>

using namespace std;

int main()
{
  // Declarations

  const short MIN_RANGE = 1;
  const short MAX_RANGE = 100;
  short looped_number = 1;
  short sum_3 = 0;
  short sum_5 = 0;
  short sum_even = 0;
  
  // Greeting and Inputs

  // Computations and Outputs

  do {
      if ( looped_number % 2 == 0)
      
        sum_even = sum_even + looped_number;
      
      else if ( looped_number % 10 == 3)
        
        sum_3 = sum_3 + looped_number;
        
      else if ( looped_number % 10 == 5)
           
        sum_5 = sum_5 + looped_number;

     ++looped_number;

    } while ( looped_number >= MIN_RANGE && looped_number <= MAX_RANGE);  // sums the numbers 
  
  cout<< "The sum of even numbers in range 1 to 100 is: " <<sum_even<< endl;

  cout<< "The sum of numbers ending with a 3 in the range 1 to 100 is: "
         <<sum_3<< endl;

  cout<< "The sum of numbers ending with a 5 in the range 1 to 100 is: "
         <<sum_5<< endl;
  
  return 0;
}           
