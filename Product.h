using namespace std;
#include "string"
#include <iostream>
#ifndef SECONDPROJECTOOP_PRODUCT_H
#define SECONDPROJECTOOP_PRODUCT_H


class Product {
protected:

    string name;
    int due_date;
    int weight;
    
public:
    Product(string name, int due_date, int weight){
        this->name = name;
        this->due_date = due_date;
        this->weight = weight;
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
