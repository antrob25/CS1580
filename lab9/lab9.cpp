// Programer: ANTHONY ROBLES
// username: argk4
// Instructor: Konda
// Section: a
// Date: 3/19/19
// File: lab9.cpp
// Purpose: A program that assigns weight values to an array of weights, sorts
// them in ascending order, computes the average of the weights and outputs the array to the screen.

#include <iostream>
#include "lab9.h"

using namespace std;

int main()
{
  srand(time(NULL));
  int array_w[10];
  int data_size = 10;

  cout<<"\tHello!\n";

  input(array_w, data_size);

  output_weights(array_w, data_size);

  sort_arr(array_w, data_size);

  cout<<"The average weight is "<<average(array_w, data_size)<<endl;

  output_weights(array_w, data_size);

  cout<<"\tGoodbye!\n";

  return 0;
}
