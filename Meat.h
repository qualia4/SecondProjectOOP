#include "Product.h"
#ifndef SECONDPROJECTOOP_MEAT_H
#define SECONDPROJECTOOP_MEAT_H


class Meat: public Product{
public:
    using Product::Product;
    using Product::getName;
    using Product::getDueDate;
    using Product::getWeight;
};


#endif
