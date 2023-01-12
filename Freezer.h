#include "Container.h"
#ifndef SECONDPROJECTOOP_FREEZER_H
#define SECONDPROJECTOOP_FREEZER_H


class Freezer: public Container{
    int temperature = -10;
    int maxTemp = -1;
    int minTemp = -20;
public:
    using Container::Container;
    using Container::addProduct;
    using Container::take;
    using Container::view;
    using Container::nextDay;
    using Container::getCapacity;
    using Container::getFilled;
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
    void printScope(){
        cout << "Scope: " << minTemp << "-" << maxTemp << endl;
    }
    ~Freezer(){
        for(int i = 0; i < products.size(); i++){
            delete[]products[i];
        }
    }

};


#endif
