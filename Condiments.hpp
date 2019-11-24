#pragma once

#include <iostream>
#include "Beverage.hpp"
#include "CondimentDecorator.hpp"

class Mocha: public CondimentDecorator {
    private:
        Beverage* m_beverage;
    public:
        Mocha(Beverage* const t_beverage): m_beverage(t_beverage) {}
        std::string getDescription() const override;
        double cost() const override;
        ~Mocha();
};

class Soy: public CondimentDecorator {
    private:
        Beverage* m_beverage;
    public:
        Soy(Beverage* const t_beverage): m_beverage(t_beverage) {}
        std::string getDescription() const override;
        double cost() const override;
        ~Soy();
};

class Whip: public CondimentDecorator {
    private:
        Beverage* m_beverage;
    public:
        Whip(Beverage* const t_beverage): m_beverage(t_beverage) {}
        std::string getDescription() const override;
        double cost() const override;
        ~Whip();
};
