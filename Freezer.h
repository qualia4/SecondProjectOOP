#include "Container.h"
#ifndef SECONDPROJECTOOP_FREEZER_H
#define SECONDPROJECTOOP_FREEZER_H


class Freezer: public Container{
//    int temperature = -10;
//    int maxTemp = -1;
//    int minTemp = -20;
public:
    using Container::Container;
    using Container::addProduct;
    using Container::take;
    using Container::view;
    using Container::nextDay;
    using Container::getType;
    using Container::setTemperature;
    using Container::getTemperature;
    using Container::printScope;
    ~Freezer(){
        for(int i = 0; i < products.size(); i++){
            delete[]products[i];
        }
    }

};


#endif
