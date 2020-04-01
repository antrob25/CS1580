//  Programmer: ANTHONY ROBLES                                  Date: 2/19/19
//  File: lab5.cpp                    Class: section a  Instructor: Konda 
//  Purpose: this program generates random number

#include <iostream>

#include <cstdlib>

using namespace std;

int main()
{
  // declarations
  const short MIN_RANGE = 1;
  const short OPTION_1 = 1;
  const short OPTION_2 = 2;
  const short OPTION_3 = 3;
  const short OPTION_4 = 4;
  short max_range, seed, choice, odd_sum, sum_2, sum_6;
  short sum = 0;

  // Inputs
  cout << "Please enter a positive number to seed the random number generator\n"
       << "\t[Seed]: ";
  cin >> seed;
 
  srand(seed); // assigns seed to random numbe generator
  max_range = (rand()%100+50);  // assigns max range

  do  
  {
    // prompts user for input
    cout << "Hello\n Please choose on of the following options (1-4)\n";
    cout << OPTION_1 << ". Sum odd numbers in the range " << MIN_RANGE << " to " 
         << max_range << "\n";
    cout << OPTION_2 << ". Sum numbers with 2 as least significant digit, "
         << "in the range " << MIN_RANGE << " to " << max_range << "\n";
    cout << OPTION_3 << ". Sum numbers with 6 as least significant digit, "
         << "in the range " << MIN_RANGE << " to " << max_range << "\n";
    cout << OPTION_4 << ". Quit\n";     
    cout << "[Choice]: ";
    cin >> choice;
    
    switch ( choice )
    {
      case 1:  // sums odd numbers in range
            for ( odd_sum = 1; odd_sum <= max_range; odd_sum++ )
                if ( odd_sum%2 == 1 ) 
                   sum = odd_sum + sum;
            cout << "The sum of the odd numbers in the range " << MIN_RANGE 
                 << " to " << max_range << " is " << sum << endl;  
            break; 
      case 2: // sums numbers that end in 2
            for ( sum_2 = 1; sum_2 <= max_range; sum_2++ )
                if ( sum_2%10 == 2 )
                   sum = sum_2 + sum;
            cout << "The sum of the numbers ending in 2 in the range " 
                 << MIN_RANGE << " to " << max_range << " is " <<sum <<endl;
            break;
      case 3:  // sums numbers that end in 6
            for ( sum_6 = 1; sum_6 <= max_range; sum_6++ )
                if ( sum_6%10 == 6 )
                   sum = sum_2 + sum;
            cout << "The sum of the numbers ending in 6 in the range " 
                 << MIN_RANGE << " to " << max_range << " is " <<sum <<endl;
            break;
      case 4:
            cout << "Have a nice day!\n"; 
            choice = OPTION_4;
            break;
      default:
             cout << "Please enter a valid choice\n"; // displays error
    }                  
  } while ( !(choice == OPTION_4) );  // prompts options until user quits 

  return 0;
}
