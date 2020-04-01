// Programm/er: ANTHONY ROBLES
// Username: argk4
// Instructr: Konda
// Section: a 
// Date: 4/9/19
// File: lab11.cpp
// Purpose: This program encrypts letters from an input file and outputs the 
//encrypted letters to an output file.

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

// Constants
const int SHIFT = 1;

// The ceaserCipher function encrypts a char and returns the char to the calling
// function.
// Pre: None.
// Post: The char is encrypted and returned to the calling function. 
char ceaserCipher(char data);

int main()
{
  // declarations
  ifstream fin;
  ofstream fout;
  char filename[50] = "input.txt";
  char filename2[50] = "output.txt";
  char letters[200]; 
  char letter;
  int length;

  fin.open(filename);
  fout.open(filename2);
  fin.getline(letters, 199);
  length = strlen(letters);
  for (int i = 0; i < length; i++) // encrypts input
  {
    letter = ceaserCipher(letters[i]);
    fout << letter;
  }
  fin.close();
  fout.close();
  return 0;
}

char ceaserCipher(char data)
{
  char encrypt;

  if (data >= 'a' && data <= 'z')
    encrypt = data + SHIFT;
  else if (data >= 'A' && data <= 'Z')
    encrypt = data + SHIFT;
  else 
    encrypt = data;

  return encrypt;
}
