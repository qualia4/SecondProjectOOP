#include "Container.h"
#include "vector"
#include <iostream>
#ifndef SECONDPROJECTOOP_SHELVE_H
#define SECONDPROJECTOOP_SHELVE_H


class Shelve: public Container{
public:
    using Container::Container;
    using Container::addProduct;
    using Container::take;
    using Container::view;
    using Container::nextDay;
    using Container::getCapacity;
    using Container::getFilled;
    ~Shelve(){
        for(int i = 0; i < products.size(); i++){
            delete[]products[i];
        }
    }
};


#endif
