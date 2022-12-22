#include "Shelve.h"
#ifndef SECONDPROJECTOOP_REFRIGERATOR_H
#define SECONDPROJECTOOP_REFRIGERATOR_H


class Refrigerator: public Shelve{
    int temperature;
    int maxTemp;
    int minTemp;
public:
    Refrigerator(int capacity, int filled, int minTemp, int maxTemp, int temp) : Shelve(capacity, filled){
        if(minTemp <= maxTemp){
            this->minTemp = minTemp;
            this->maxTemp = maxTemp;
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
