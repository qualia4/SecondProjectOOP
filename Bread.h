#include "Product.h"
#ifndef SECONDPROJECTOOP_BREAD_H
#define SECONDPROJECTOOP_BREAD_H


class Bread: public Product{
    using Product::Product;
    using Product::view;
    using Product::nextDay;
    using Product::getName;
    using Product::getDueDate;
    using Product::getWeight;
};

#endif
