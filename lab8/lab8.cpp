// Programmar: ANTHONY ROBLES 
// Username: argk4
// Instructor: Konda
// Section: a                  
// Date: 3/12/19
// File: lab8.cpp 
// Purpose: The file contains the main function to display the distance between
// 2 points. 

#include <iostream>
#include "helper.h"

using namespace std;

int main()
{
  // declarations
  point_float fp1, fp2; // continuous points
  point_int ip1, ip2;  // discrete points
  float f_distance; // distance between 2 continuous points
  int i_distance; // distance between 2 discrete points

  greet();

  // gathers coordinates for discrete points
  cout<<"Please enter the coordinates of discrete points to compute the " 
      <<"distance between the points.\n"
      <<" [x-coord 1]: ";
  cin>>ip1.m_x_coord;  
  cout<<" [y-coord 1]: ";
  cin>>ip1.m_y_coord;
  cout<<" [x-coord 2]: ";
  cin>>ip2.m_x_coord;
  cout<<" [y-coord 2]: ";
  cin>>ip2.m_y_coord;

  i_distance = computeDistance(ip1, ip2);
  cout<<"The distance between the points is "<<i_distance<<endl;
 
  // gathers coordinates for continuous points
  cout<<"Please enter the coordinates of continuous points to compute the "
      <<"distance between the points.\n"
      <<" [x-coord 1]: ";
  cin>>fp1.m_x_coord;
  cout<<" [y-coord 1]: ";
  cin>>fp1.m_y_coord;
  cout<<" [x-coord 2]: ";
  cin>>fp2.m_x_coord;
  cout<<" [y-coord 2]: ";
  cin>>fp2.m_y_coord;
 
  f_distance = computeDistance(fp1, fp2);
  cout<<"The distance between the point is "<<f_distance<<endl;

  signout();

  return 0;
}
