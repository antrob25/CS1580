//  Programmer: ANTHONY ROBLES                                  Date: 2/26/19
//  File: lab6.cpp                         Class: section a    Instructor: Konda
//  Purpose: This file contains a program that converts Celsius to Fahrenheit.


#include <iostream>

using namespace std;

//  Function delcarations
void greeting();
float temp_prompt();
float convert(float celsius);
float print_temp(float fahr);

int main()
{
  // Declarations
  float fahr, celsius;

  // Greeting, Inputs, and Outputs
  greeting(); // function that greets user 
  
  celsius = temp_prompt();  // function that prompts the user for a temperature

  fahr = convert(celsius);  // function that converts celsius to fahrenheit

  print_temp(fahr);  // function that prints fahrenheit conversion to user

  cout<<"Have a nice day!"<<endl;

 return 0;
}

void greeting() // greets user
{
  cout<<"Hello!"<<endl;
  return;
}

float temp_prompt() // prompts for celsius
{
  float celsius;
  cout<<"Please enter a temperature in Celsius\n"
      <<" [Celsius]: ";
  cin>>celsius;
  return celsius;
}

float convert(float celsius) // converts celsius
{
  float fahr; 
  fahr = (celsius*(static_cast<float>(9)/5))+32;
  return fahr;
}

float print_temp(float fahr) // prints fahrenheit
{
  cout<<"Here is the temperature in Fahrenheit.\n"
      <<"[Fahrenheit]: "<<fahr<<endl;
  return fahr;
}  
