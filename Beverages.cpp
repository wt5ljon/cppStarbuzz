#include "Beverages.hpp"

Espresso::Espresso(const std::string& t_size) {
    m_size = t_size;
    m_description = "Espresso";
}

double Espresso::cost() {
    return 1.99;
}

HouseBlend::HouseBlend(const std::string& t_size) {
    m_size = t_size;
    m_description = "House Blend Coffee";
}

double HouseBlend::cost() {
    return 0.89;
}

Decaf::Decaf(const std::string& t_size) {
    m_size = t_size;
    m_description = "Decaf Coffee";
}

double Decaf::cost() {
    return 1.05;
}

DarkRoast::DarkRoast(const std::string& t_size) {
    m_size = t_size;
    m_description = "DarkRoast Coffee";
}

double DarkRoast::cost() {
    return 0.99;
}