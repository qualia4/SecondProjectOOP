#ifndef SECONDPROJECTOOP_CONTAINER_H
#define SECONDPROJECTOOP_CONTAINER_H
#include "Product.h"
#include "vector"
#include <iostream>


class Container {
protected:
    vector<Product*> products;
    int capacity = 10;
    int filled = 0;
    string type;
    int temperature;
    int maxTemp;
    int minTemp;
public:
    Container(string type = "default", int temp = 15, int maxTemp = 30, int minTemp = 10):
    type(type), temperature(temp), maxTemp(maxTemp), minTemp(minTemp){}
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
    void setTemperature(int temp){
        if(temp >= minTemp && temp <= maxTemp){
            this->temperature = temp;
            cout << "Temperature set to " << temp  << endl;
        }
        else{
            throw invalid_argument("You can not set such temperature");
        }
    }
    int getTemperature(){
        return temperature;
    }
    string getType(){
        return type;
    }
    void printScope(){
        cout << "Scope: " << minTemp << "-" << maxTemp << endl;
    }
    ~Container(){
        for(int i = 0; i < products.size(); i++){
            delete[]products[i];
        }
    }

};


#endif
