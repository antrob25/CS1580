// Programmar: ANTHONY ROBLES
// Username: argk4
// Instructor: Konda
// Section: a
// Date: 3/19/19
// File: lab9.h
// Purpose: A program that assigns weight values to an array of weights, sorts
// them in ascending order, computes the average of the weights and outputs the array to the screen.

#ifndef LAB9_H
#define LAB9_H
#include <iostream>

using namespace std;

// constants
  const int MIN_WEIGHT = 5;
  const int MAX_WEIGHT = 296;

// prototypes

// The input() function computes random weights to the array passed to the 
// function.
// Pre: Array must have a data size of 10.
// Post: The arrays values are set to random weights.
void input(int arr_input[], const int size);

// The sort_arr() function sorts the array of weights in ascending order.
// Pre: Array must have a data size of 10.
// Post: The array of weights is sorted in ascending order.
void sort_arr(int arr[], const int size);

// The average() function computes the average of the array of weights and 
// returns the value of the average to the calling function.
// Pre: Array must have a data size of 10.
// Post: The average is computed and returned to the calling function.
float average(const int arr[], const int size);

// The output_weights() function outputs the array of weights to the screen.
// Pre: Array must have a data size of 10.
// Post: The array of weights are outputed to the screen.
void output_weights(const int output_arr[], const int size);

#endif
