// Programmer: ANTHONY ROBLES
// MST Username: argk4
// Instructor Name: Konda
// Section: a
// Date: 4/30/19
// File: bookCart.h
// Purpose: This program checksout books for a customer.

#ifndef BOOKCART_H
#define BOOKCART_H
#include <iostream>

using namespace std;

enum bookType = (textBook, novel, fantasy);

class bookCart
{
  public:
    static int m_totalTextBooks;
    static int m_totalNovels;
    static int m_totalFantasies;
    bookCart(long customerID): m_customerID(customerID), m_textBooksInCart(0),
                                    m_novelsInCart(0), m_fantasiesInCart(0) {}
    int getBooks(const bookType t, const int count);
    void addTextBooks(const int count);
    void addNovels(const int count);
    void addFantasies(const int count);
    void checkout();

  private:
    long m_customerID;
    int m_textBooksinCart;
    int m_novelIsInCart;
    int m_fantasyInCart;
};

#endif
