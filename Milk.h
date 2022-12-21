#include "Product.h"
#ifndef SECONDPROJECTOOP_MILK_H
#define SECONDPROJECTOOP_MILK_H


class Milk : public Product{
public:
    using Product::Product;
    using Product::getName;
    using Product::getDueDate;
    using Product::getWeight;
};


#endif //SECONDPROJECTOOP_MILK_H
