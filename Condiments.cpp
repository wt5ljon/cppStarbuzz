#include "Condiments.hpp"

std::string Mocha::getDescription() const {
    return m_beverage->getDescription() + ", Mocha";
}

double Mocha::cost() const {
    if (m_size == "Tall")
        return 0.15 + m_beverage->cost();
    else if (m_size == "Grande")
        return 0.10 + m_beverage->cost();
    else
        return 0.22 + m_beverage->cost();
}

Mocha::~Mocha() {
    delete m_beverage;
}

std::string Soy::getDescription() const {
    return m_beverage->getDescription() + ", Soy";
}

double Soy::cost() const {
    if (m_size == "Tall")
        return 0.10 + m_beverage->cost();
    else if (m_size == "Grande")
        return 0.15 + m_beverage->cost();
    else
        return 0.20 + m_beverage->cost();
    
}

Soy::~Soy() {
    delete m_beverage;
}

std::string Whip::getDescription() const {
    return m_beverage->getDescription() + ", Whip";
}

double Whip::cost() const {
    if (m_size == "Tall")
        return 0.05 + m_beverage->cost();
    else if (m_size == "Grande")
        return 0.10 + m_beverage->cost();
    else
        return 0.15 + m_beverage->cost();
}

Whip::~Whip() {
    delete m_beverage;
}
