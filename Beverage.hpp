#pragma once

#include <iostream>

class Beverage {
    protected:
        std::string m_size;
        std::string m_description;
    public:
        Beverage();
        void setSize(const std::string& t_size);
        std::string getSize() const;
        virtual std::string getDescription() const;
        virtual double cost() const = 0;
        virtual ~Beverage() {}
};
