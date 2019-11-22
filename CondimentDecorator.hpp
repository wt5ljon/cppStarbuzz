#ifndef CONDIMENTDECORATOR_HPP
#define CONDIMENTDECORATOR_HPP

#include <iostream>
#include "Beverage.hpp"

class CondimentDecorator: public Beverage {
    public:
        virtual std::string getDescription() = 0;
        virtual ~CondimentDecorator() {}
};

#endif  // CONDIMENTDECORATOR_HPP