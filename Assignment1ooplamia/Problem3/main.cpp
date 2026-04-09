#include <iostream>
#include "Book.h"
#include "Magazine.h"
#include "ResearchPaper.h"

using namespace std;

int main()
{
    LibraryItem* items[4];

    items[0] = new Book(1,"C++ Programming",50,"Bjarne",500);
    items[1] = new Book(2,"Data Structures",40,"Mark Allen",350);
    items[2] = new Magazine(3,"Tech Monthly",20,45,"TechPub");
    items[3] = new ResearchPaper(4,"AI Research",60,"Dr.Smith","AI");

    cout<<"Library Items\n\n";

    for(int i=0;i<4;i++)
    {
        items[i]->displayInfo();
        cout<<"Late Fee (5 days): "
            <<items[i]->calculateLateFee(5)<<endl<<endl;
    }

    cout<<"Borrowing Demo\n";
    items[0]->borrowItem();
    items[1]->borrowItem("Mohamed");

    cout<<"\nPrice Comparison\n";
    items[0]->comparePrice(*items[2]);

    cout<<"\nTotal Items: "
        <<LibraryItem::getTotalItems()<<endl;

    for(int i=0;i<4;i++)
        delete items[i];

    return 0;
}