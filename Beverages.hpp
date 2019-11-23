#pragma once

#include <iostream>
#include "Beverage.hpp"

class Espresso: public Beverage {
    public:
        Espresso(std::string);
        double cost() override;
        ~Espresso() {}
};

class DarkRoast: public Beverage {
    public:
        DarkRoast(std::string);
        double cost() override;
        ~DarkRoast() {}
};

class Decaf: public Beverage {
    public:
        Decaf();
        double cost() override;
        ~Decaf() {}
};

class HouseBlend: public Beverage {
    public:
        HouseBlend(std::string);
        double cost() override;
        ~HouseBlend() {}
};
