#ifndef BOOK_H
#define BOOK_H

#include "LibraryItem.h"

class Book : public LibraryItem {

private:
    std::string author;
    int pages;

public:
    Book(int id,std::string title,double price,
         std::string author,int pages);

    void displayInfo();
    double calculateLateFee(int days);
};

#endif