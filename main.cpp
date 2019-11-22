#include <iostream>
#include "Beverages.hpp"
#include "Condiments.hpp"

int main() {
    Beverage* beverage = new Espresso("Tall");
    std::cout << beverage->getDescription() << " $" << beverage->cost() << std::endl;

    Beverage* beverage2 = new DarkRoast("Grande");
    beverage2 = new Mocha(beverage2);
    beverage2 = new Mocha(beverage2);
    beverage2 = new Whip(beverage2);
    std::cout << beverage2->getDescription() << " $" << beverage2->cost() << std::endl;

    Beverage* beverage3 = new HouseBlend("Venti");
    beverage3 = new Soy(beverage3);
    beverage3 = new Mocha(beverage3);
    beverage3 = new Whip(beverage3);
    std::cout << beverage3->getDescription() << " $" << beverage3->cost() << std::endl;

    delete beverage;
    delete beverage2;
    delete beverage3;

    return 0;
}