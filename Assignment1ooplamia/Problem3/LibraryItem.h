#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H

#include <string>

class LibraryItem {

private:
    int id;
    std::string title;
    bool isBorrowed;

protected:
    double price;
    static int totalItems;

public:
    LibraryItem(int id, std::string title, double price);

    int getId();
    std::string getTitle();

    void borrowItem();
    void borrowItem(std::string borrowerName);

    void comparePrice(LibraryItem &a);

    static int getTotalItems();

    virtual void displayInfo() = 0;
    virtual double calculateLateFee(int days) = 0;

    virtual ~LibraryItem();
};

#endif