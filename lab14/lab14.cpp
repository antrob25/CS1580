// Programmer: ANTHONY ROBLES
// MST Username: argk4
// Instructor Name: Konda
// Section: a
// Date: 4/30/19
// File: lab14.cpp
// Purpose: This program checksout books for customers.

#include "bookCart.h"

using namespace std;

int main()
{
  bookCart cart1(1111), cart2(2222), cart3(3333);

  cart1.addTextbooks(textbook, 2);
  cart1.addNovels(novel, 5);
  cart1.addFantasies(fantasy, 2);
  
  cart2.addTextbooks(textbook, 5);
  cart2.addNovels(novel, 3);
  cart2.addFantasies(fantasy, 2);

  cart3.addTextbooks(textbook, 10);
  cart3.addNovels(novel, 2);
  cart3.addFantasies(fantasy, 2);

  return 0;
}
