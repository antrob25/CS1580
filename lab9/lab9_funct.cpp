// Programmar: ANTHONY ROBLES
// Username: argk4
// Instructor: Konda
// Section: a
// Date: 3/19/19
// File lab9_funct.cpp
// Purpose: A program that assigns weight values to an array of weights, sorts
// them in ascending order, computes the average of the weights and outputs the array to the screen.

#include <iostream>
#include <cstdlib>
#include "lab9.h"

using namespace std;

void input(int arr_input[], const int size)
{
  for (int i = 0; i < size; i++)
    arr_input[i] = ((rand()%MAX_WEIGHT)+ MIN_WEIGHT);

  return;
}

void sort_arr(int arr[], const int size)
{
  int swap;

  for (int i = 0; i < size; i++)
  {
    for (int f = 0; f < size; f++)
      if (arr[f] > arr[f+1])
      {
        swap = arr[f];
        arr[f] = arr[f+1];
        arr[f+1] = swap;
      }
  }
  return;
}

float average(const int arr[], const int size)
{
  float average = 0;
  float sum = 0;

  for (int i = 0; i < size; i++)
    sum = sum + arr[i];
  
  average = sum/static_cast<float>(size);

  return average;
}

void output_weights(const int output_arr[], const int size)
{
  for (int i = 0; i < size; i++)
    cout<<output_arr[i]<<endl;

  return;
}
