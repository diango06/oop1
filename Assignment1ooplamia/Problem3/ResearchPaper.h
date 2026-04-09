#ifndef RESEARCHPAPER_H
#define RESEARCHPAPER_H

#include "LibraryItem.h"

class ResearchPaper : public LibraryItem {

private:
    std::string researcher;
    std::string field;

public:
    ResearchPaper(int id,std::string title,double price,
                  std::string researcher,std::string field);

    void displayInfo();
    double calculateLateFee(int days);
};

#endif