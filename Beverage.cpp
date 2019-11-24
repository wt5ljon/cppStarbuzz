#include "Beverage.hpp"

Beverage::Beverage()
    : m_size("Unknown Size"),m_description("Unknown Beverage") {}

std::string Beverage::getDescription() const {
    return m_size + " " + m_description;
}

void Beverage::setSize(const std::string& t_size) {
    m_size = t_size;
}

std::string Beverage::getSize() const {
    return m_size;
}
