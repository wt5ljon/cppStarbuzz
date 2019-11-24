#pragma once

#include <iostream>
#include "Beverage.hpp"

class Espresso: public Beverage {
    public:
        Espresso(const std::string&);
        double cost() override;
        ~Espresso() {}
};

class DarkRoast: public Beverage {
    public:
        DarkRoast(const std::string&);
        double cost() override;
        ~DarkRoast() {}
};

class Decaf: public Beverage {
    public:
        Decaf(const std::string&);
        double cost() override;
        ~Decaf() {}
};

class HouseBlend: public Beverage {
    public:
        HouseBlend(const std::string&);
        double cost() override;
        ~HouseBlend() {}
};
