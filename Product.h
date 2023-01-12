using namespace std;
#include "string"
#include <iostream>
#ifndef SECONDPROJECTOOP_PRODUCT_H
#define SECONDPROJECTOOP_PRODUCT_H


class Product {
protected:
    string name;
    int due_date;
    double weight;

public:
    Product(string name, int due_date, double weight){
        this->name = name;
        this->due_date = due_date;
        this->weight = weight;
    }

    virtual void view() {
        cout << "Product: " << name << ". ";
        cout << "Weight: " << weight << ". ";
        cout << "Due date: " << due_date << " days left." << endl;
    }
    bool nextDay(){
        due_date--;
        if(due_date < 1){
            return false;
        }
        return true;
    }
    string getName(){
        return name;
    }
    int getDueDate(){
        return due_date;
    }

    int getWeight(){
        return weight;
    }
};


#endif
