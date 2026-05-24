#include "Cat.hpp"
#include <iostream>

Cat::Cat(const std::string& name, int age, double weight, const std::string& eyeColor, bool isLazy)
    : Animal(name, age, weight), eyeColor(eyeColor), isLazy(isLazy), livesLeft(9) {
}

void Cat::purr() {
    std::cout << name << "мурка с глазами " << eyeColor << "мурчит.\n";
}

void Cat::scratchFurniture() {
    std::cout << name << "пинает диван(\n";
}

void Cat::huntMouse() {
    if (isLazy) {
        std::cout << name << "не сегодня\n";
    }
    else {
        std::cout << name << "мышка ням\n";
    }
}