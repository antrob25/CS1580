//  Programmer: Anthony Robles                                          Date: 2/5/19
//  File: lab3.cpp                                                     Class: Section a 
//  Purpose: Calculates the user's BMI

#include <iostream>

using namespace std;

int main()
{
  // Declarations

  const int  CONSERSION_FACTOR = 703;
  int mass = 0;
  int height = 0;
  float naive_bmi = 0;
  float bmi = 0; 
  
  // Greeting

  cout<<  "Welcome to the BMI calculator"  << endl;
  cout<<  "Please enter your weight in pounds  "  << endl;
  cin>> mass;
  cout<<  "Please enter your height in inches   "  << endl;
  cin>> height;
  
  // Computations
  
  naive_bmi = static_cast<float>(mass)/height;
  bmi = static_cast<float>(mass*CONSERSION_FACTOR)/(height*height); 
  
  // Closing
  
  cout<<  "Results"  << endl;
  cout<<  "The naive BMI index is "  << naive_bmi <<endl;
  cout<<  "The official BMI is "  << bmi <<endl;
  cout<<  "The official BMI after round-up is " <<static_cast<int>(bmi)<< endl; 
  cout<<  "Goodbye" <<endl;

 return 0; 
}    
