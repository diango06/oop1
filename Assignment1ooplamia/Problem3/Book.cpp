#include <iostream>
#include "Book.h"

using namespace std;

Book::Book(int id,string title,double price,
           string a,int p)
: LibraryItem(id,title,price)
{
    author = a;
    pages = p;
}

void Book::displayInfo()
{
    cout<<"Book: "<<getTitle()
        <<" Author: "<<author
        <<" Pages: "<<pages<<endl;
}

double Book::calculateLateFee(int days)
{
    return days * 2.0;
}