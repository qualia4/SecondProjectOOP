#include "Product.h"
#ifndef SECONDPROJECTOOP_SOAP_H
#define SECONDPROJECTOOP_SOAP_H


class Soap: public Product{
    using Product::Product;
    using Product::getName;
    using Product::getDueDate;
    using Product::getWeight;
};


#endif
