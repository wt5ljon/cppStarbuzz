#pragma once

#include <iostream>
#include "Beverage.hpp"

class CondimentDecorator: public Beverage {
    public:
        virtual std::string getDescription() const = 0;
        virtual ~CondimentDecorator() {}
};
