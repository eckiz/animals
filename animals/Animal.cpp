#include "Animal.hpp"
#include <iostream>

Animal::Animal(const std::string& name, int age, double weight)
    : name(name), age(age), weight(weight) {
}

void Animal::eat() {
    std::cout << name << "ест\n";
}

void Animal::sleep() {
    std::cout << name << "спит..\n";
}

void Animal::makeNoise() {
    std::cout << name << "пукает\n";
}