#include "Condiments.hpp"

std::string Mocha::getDescription() {
    return m_beverage->getDescription() + ", Mocha";
}

double Mocha::cost() {
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

std::string Soy::getDescription() {
    return m_beverage->getDescription() + ", Soy";
}

double Soy::cost() {
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

std::string Whip::getDescription() {
    return m_beverage->getDescription() + ", Whip";
}

double Whip::cost() {
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
