#ifndef CONDIMENTS_HPP
#define CONDIMENTS_HPP

#include <iostream>
#include "Beverage.hpp"
#include "CondimentDecorator.hpp"

class Mocha: public CondimentDecorator {
    private:
        Beverage* m_beverage;
    public:
        Mocha(Beverage* t_beverage): m_beverage(t_beverage) {}
        std::string getDescription() override;
        double cost() override;
        ~Mocha();
};

class Soy: public CondimentDecorator {
    private:
        Beverage* m_beverage;
    public:
        Soy(Beverage* t_beverage): m_beverage(t_beverage) {}
        std::string getDescription() override;
        double cost() override;
        ~Soy();
};

class Whip: public CondimentDecorator {
    private:
        Beverage* m_beverage;
    public:
        Whip(Beverage* t_beverage): m_beverage(t_beverage) {}
        std::string getDescription() override;
        double cost() override;
        ~Whip();
};

#endif  //CONDIMENTS_HPP