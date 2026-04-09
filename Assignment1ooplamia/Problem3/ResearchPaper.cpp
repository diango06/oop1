#include <iostream>
#include "ResearchPaper.h"

using namespace std;

ResearchPaper::ResearchPaper(int id,string title,double price,
                             string r,string f)
: LibraryItem(id,title,price)
{
    researcher = r;
    field = f;
}

void ResearchPaper::displayInfo()
{
    cout<<"Research Paper: "<<getTitle()
        <<" Researcher: "<<researcher
        <<" Field: "<<field<<endl;
}

double ResearchPaper::calculateLateFee(int days)
{
    return days * 3.0;
}