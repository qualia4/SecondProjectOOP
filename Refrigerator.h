#include "Container.h"
#ifndef SECONDPROJECTOOP_REFRIGERATOR_H
#define SECONDPROJECTOOP_REFRIGERATOR_H


class Refrigerator: public Container{
//    int temperature = 0;
//    int maxTemp = 10;
//    int minTemp = -5;
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
    ~Refrigerator(){
        for(int i = 0; i < products.size(); i++){
            delete[]products[i];
        }
    }
};


#endif
