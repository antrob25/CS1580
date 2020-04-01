// Programmer: ANTHONY ROBLES
// MST Username: argk4
// Instructor Name: Konda
// Section: a
// Date: 4/30/19
// File: bookCart.cpp
// Purpose: This program checksout books for customers.

#include "bookCart.h"

int bookCart::m_totalTextBooks = 500;
int bookCart::m_totalNovels = 10;
int bookCart::m_totalFantasies = 5;

int bookCart::getBooks(const bookType t, const int count)
{
  int temp = 0;
  if (t == 0)
  {
    if (m_totalTextBooks >= count)
    {
      temp = count;
      m_totalTextBooks -= count;
    }
  else if (t == 1)
    {
      if (m_totalNovels >= count)
      {
        temp = count;
        m_totalNovels -= count;
      }
    }
  else if (m_totalFantasies >= count)
    {
      temp = count;
      m_totalFantasies -= count;
    }    
  return temp;
}

void bookCart::addTextBooks(const int count)
{
  int temp = getBooks(textBook, count);
  if (temp == 0)
    cout << "Textbooks could not be added to the cart!" << endl;  
  else
  {
    m_textBooksInCart += temp;
    cout << count << "Added " << temp << "text books into your cart!" << endl;
  }
  return;
}

void bookCart::addNovels(const int count)
{
  int temp = getBooks(novel, count);
  if (temp == 0)
    cout << "Novels could not be added to the cart." << endl;
  else
  {
    m_novelsInCart += temp;
    cout << count << "Added " << temp << "novel books into your cart!" << endl;
  }
  return;
}

void bookCart::addFantasies(const int count)
{
  int temp = getBooks(fantasy, count);
  if (temp == 0)
    cout << "fantasies could not be added to the cart." << endl;
  else
  {
    m_fantasyInCart += temp;
    cout << count << "Added " << temp << "Fantasy books into your cart!" << endl;
  }
  return;
}

void bookCart::checkout()
{
  int total = 0;
  total += m_totalTextBooks;
  total += m_totalNovels;
  total += m_totalFantasiess;
  if (total <= 10)
  {
    cout << "Checkout was successful for customer " << m_customerID << "!\n";
    cout << "Cart details: " << endl; 
    cout << "Text books: " << m_textbooksInCart << endl; 
    cout << "Novels: " << m_novelsInCart << endl; 
    cout<< "Fantasies: " << m_fantasyInCart << endl;
  }
  else
  {
    cout << "Checkout was failed for customer " << m_customerID << "!" << endl;
    cout << "Your cart can have a maximum 10 books and you have "<<total<<endl;
    cout << "Cart details: " << endl;
    cout << "Text books: " << m_textbooksInCart << endl;
    cout << "Novels: " << m_novelsInCart << endl;
    cout<< "Fantasies: " << m_fantasyInCart << endl;
  }
}
