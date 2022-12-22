#include "Product.h"
#ifndef SECONDPROJECTOOP_WATER_H
#define SECONDPROJECTOOP_WATER_H


class Water: public Product{
    using Product::Product;
    using Product::view;
    using Product::nextDay;
    using Product::getName;
    using Product::getDueDate;
    using Product::getWeight;
};


#endif
