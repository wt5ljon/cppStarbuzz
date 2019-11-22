#include "Beverage.hpp"

Beverage::Beverage()
    : m_size("Unknown"),m_description("Unknown Beverage") {}

std::string Beverage::getDescription() {
    return m_size + " " + m_description;
}

void Beverage::setSize(std::string t_size) {
    m_size = t_size;
}

std::string Beverage::getSize() {
    return m_size;
}
