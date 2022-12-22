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
    void take(string name){
        for(int i = 0; i < products.size(); i++){
            if(products[i]->getName() == name){
                delete products[i];
                products.erase(products.begin() + i);
                break;
            }
        }
    }
    Product* move(string name){
        for(int i = 0; i < products.size(); i++){
            if(products[i]->getName() == name){
                Product* prodToMove = products[i];
                products.erase(products.begin() + i);
                return prodToMove;
            }
        }
    }
    void view(){
        for(int i = 0; i < products.size(); i++){
            products[i]->view();
        }
    }
    void nextDay(){
        for(int i = 0; i < products.size(); i++){
            if(!products[i]->nextDay()){
                delete products[i];
                products.erase(products.begin() + i);
            }
        }
    }
    int getCapacity(){
        return capacity;
    }
    int getFilled(){
        return filled;
    }
};


#endif
