#include "Shelve.h"
#ifndef SECONDPROJECTOOP_REFRIGERATOR_H
#define SECONDPROJECTOOP_REFRIGERATOR_H


class Refrigerator: public Shelve{
    int temperature = 0;
    int maxTemp = 10;
    int minTemp = -5;
public:
    using Shelve::Shelve;
    using Shelve::addProduct;
    using Shelve::take;
    using Shelve::view;
    using Shelve::nextDay;
    using Shelve::getCapacity;
    using Shelve::getFilled;
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
};


#endif
