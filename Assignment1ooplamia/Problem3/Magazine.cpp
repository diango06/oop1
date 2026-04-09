#include <iostream>
#include "Magazine.h"

using namespace std;

Magazine::Magazine(int id,string title,double price,
                   int issue,string pub)
: LibraryItem(id,title,price)
{
    issueNumber = issue;
    publisher = pub;
}

void Magazine::displayInfo()
{
    cout<<"Magazine: "<<getTitle()
        <<" Issue: "<<issueNumber
        <<" Publisher: "<<publisher<<endl;
}

double Magazine::calculateLateFee(int days)
{
    return days * 1.0;
}