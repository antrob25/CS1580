// Programmer: ANTHONY ROBLES
// Username: argk4
// Instructor: Konda
// Section: a
// Date: 4/2/19
// File: lab10.cpp
// Purpose: The program prompts for a username and password for the user and 
// checks if they are valid.

#include <iostream>
#include <cstring>

using namespace std;

// The checkPalindrome() function computes if the username is a palindrome and 
// returns a bool as the result.
// Pre: arr[] must be the size of size
// Post: The bool is returned to the calling function. 
bool checkPalindrome(const char arr[], const short size);

int main()
{
  bool palindrome = false; 
  bool same = false; // checks if the passwords match
  short length = 30; // length of username
  char username[30];
  char password[30];
  char password2[30]; // password check

  do
  {
    cout<<"Enter a username you want to use(less than 10 chars and a palindome):";
    cin>>username;
    length = strlen(username);
    if (length >= 10)
      cout<<"username is invalid\n";
    else
    {
      palindrome = checkPalindrome(username, length);
      if (palindrome == false)
        cout<<"username is invalid\n";
    }
  } while (palindrome == false); // loops prompt until username is valid

  do
  {
    cout<<"Enter a password for your account(less than 20 chars)";
    cin>>password;
    if (strlen(password) >= 20)
      cout<<"password is invalid\n";
    else
    {
      cout<<"Re-enter the password:";
      cin>>password2;
      same = !(strcmp(password, password2));
      if (same == false)
         cout<<"The 2 passwords do not match\n";
    }
  } while (same == false); // loops prompt until password is valid 

  cout<<"Your username is: "<<username<<"\nyour password is: "<<password<<endl;

  return 0;
}

bool checkPalindrome(const char arr[], const short size)
{
  bool ans; // returning bool
  char temp; // temp char holder
  char arr2[10];
  strcpy(arr2, arr);
  for (int i = 0; i < size/2; i++)
    {
      temp = arr2[i];
      arr2[i] = arr2[size-i-1];
      arr2[size-i-1] = temp;
    }  
  ans = !(strcmp(arr, arr2));
  return ans;
}
