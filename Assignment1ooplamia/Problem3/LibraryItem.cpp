#include <iostream>
#include "LibraryItem.h"

using namespace std;

int LibraryItem::totalItems = 0;

LibraryItem::LibraryItem(int i,string t,double p)
{
    id = i;
    title = t;
    price = p;
    isBorrowed = false;
    totalItems++;
}

int LibraryItem::getId()
{
    return id;
}

string LibraryItem::getTitle()
{
    return title;
}

void LibraryItem::borrowItem()
{
    isBorrowed = true;
    cout << title << " borrowed\n";
}

void LibraryItem::borrowItem(string borrowerName)
{
    isBorrowed = true;
    cout << borrowerName << " borrowed " << title << endl;
}

void LibraryItem::comparePrice(LibraryItem &a)
{
    if(price > a.price)
        cout << title << " is more expensive\n";
    else if(price < a.price)
        cout << a.title << " is more expensive\n";
    else
        cout << "Both have same price\n";
}

int LibraryItem::getTotalItems()
{
    return totalItems;
}

LibraryItem::~LibraryItem(){}