#include "Product.h"
#include "vector"
#include <iostream>
#ifndef SECONDPROJECTOOP_SHELVE_H
#define SECONDPROJECTOOP_SHELVE_H


class Shelve {
protected:
    vector<Product*> products;
    int capacity;
    int filled;

public:
    Shelve(int capacity, int filled){
        this->capacity = capacity;
        this->filled = filled;
    }
    void addProduct(Product* product){
        if(capacity <= filled){
            cout << "There is no place on the shelve" << endl;
            return;
        }
        products.push_back(product);
    }
    int getCapacity(){
        return capacity;
    }
    int getFilled(){
        return filled;
    }
};


#endif //SECONDPROJECTOOP_SHELVE_H
