#ifndef MAGAZINE_H
#define MAGAZINE_H

#include "LibraryItem.h"

class Magazine : public LibraryItem {

private:
    int issueNumber;
    std::string publisher;

public:
    Magazine(int id,std::string title,double price,
             int issue,std::string publisher);

    void displayInfo();
    double calculateLateFee(int days);
};

#endif