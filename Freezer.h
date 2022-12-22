#include "Shelve.h"
#ifndef SECONDPROJECTOOP_FREEZER_H
#define SECONDPROJECTOOP_FREEZER_H


class Freezer: public Shelve{
    int temperature;
    int maxTemp = -1;
    int minTemp;
public:
    Freezer(int capacity, int filled, int minTemp, int temp) : Shelve(capacity, filled){
        if(minTemp <= maxTemp){
            this->minTemp = minTemp;
        }
        else{
            throw invalid_argument("Min temperature can't be more than max temperature");
        }
        if(temp >= minTemp && temp <= maxTemp){
            this->temperature = temp;
        }
        else{
            throw invalid_argument("You can not set such temperature");
        }
    }
    using Shelve::addProduct;
    using Shelve::getCapacity;
    using Shelve::getFilled;
    int getTemperature(){
        return temperature;
    }
    void printScope(){
        cout << "Scope: " << minTemp << "-" << maxTemp << endl;
    }

};


#endif
