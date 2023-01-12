#ifndef SECONDPROJECTOOP_CONTAINER_H
#define SECONDPROJECTOOP_CONTAINER_H
#include "Product.h"
#include "vector"
#include <iostream>


class Container {
protected:
    vector<Product*> products;
    int capacity;
    int filled;
public:
    Container(int capacity = 10, int filled = 0): capacity(capacity), filled(filled){}
    void addProduct(Product* product){
        if(capacity <= filled){
            cout << "There is no place on the shelve" << endl;
            return;
        }
        products.push_back(product);
        filled++;
    }
    void take(string name){
        for(int i = 0; i < products.size(); i++){
            if(products[i]->getName() == name){
                delete products[i];
                products.erase(products.begin() + i);
                filled--;
                break;
            }
        }
    }
    Product* move(string name){
        for(int i = 0; i < products.size(); i++){
            if(products[i]->getName() == name){
                Product* prodToMove = products[i];
                products.erase(products.begin() + i);
                filled--;
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
            bool state = products[i]->nextDay();
            if(!state){
                delete products[i];
                products.erase(products.begin() + i);
                filled--;
            }
        }
    }
    int getCapacity(){
        return capacity;
    }
    int getFilled(){
        return filled;
    }
    ~Container(){
        for(int i = 0; i < products.size(); i++){
            delete[]products[i];
        }
    }

};


#endif
