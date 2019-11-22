#ifndef BEVERAGE_HPP
#define BEVERAGE_HPP

#include <iostream>

class Beverage {
    protected:
        std::string m_size;
        std::string m_description;
    public:
        Beverage();
        void setSize(std::string t_size);
        std::string getSize();
        virtual std::string getDescription();
        virtual double cost() = 0;
        virtual ~Beverage() {}
};

#endif  // BEVERAGE_HPP