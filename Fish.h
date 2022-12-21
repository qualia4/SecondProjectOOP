#include "Product.h"
#ifndef SECONDPROJECTOOP_FISH_H
#define SECONDPROJECTOOP_FISH_H


class Fish: public Product{
    using Product::Product;
    using Product::getName;
    using Product::getDueDate;
    using Product::getWeight;
};


#endif
