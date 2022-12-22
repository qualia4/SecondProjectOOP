#include "Product.h"
#ifndef SECONDPROJECTOOP_EGGS_H
#define SECONDPROJECTOOP_EGGS_H


class Eggs: public Product{
    int amount;
public:
    Eggs(string name, int due_date, int weight, int amount) : Product(name, due_date, weight), amount(amount){}
    void view(){
        cout << "Product: " << name << ". ";
        cout << "Number: " << amount << ". ";
        cout << "Weight: " << weight << ". ";
        cout << "Due date: " << due_date << " days left." << endl;
    }
    using Product::getName;
    using Product::nextDay;
    using Product::getDueDate;
    using Product::getWeight;
    int getAmount(){
        return amount;
    }
};


#endif
