#include "Dog.hpp"
#include <iostream>

Dog::Dog(const std::string& name, int age, double weight, const std::string& breed, bool isTrained)
    : Animal(name, age, weight), breed(breed), isTrained(isTrained), fetchCount(0) {
}

void Dog::bark() {
    std::cout << name << "порода " << breed << " гаф\n";
}

void Dog::fetch() {
    fetchCount++;
    std::cout << name << "палка принесена " << fetchCount << "\n";
}

void Dog::wagTail() {
    std::cout << name << "виляет\n";
}