#include "Bird.hpp"
#include <iostream>

Bird::Bird(const std::string& name, int age, double weight, double wingspan, bool canFly)
    : Animal(name, age, weight), wingspan(wingspan), canFly(canFly), eggsLaid(0) {
}

void Bird::fly() {
    if (canFly) {
        std::cout << name << "крыль€ взмах " << wingspan << " и летит\n";
    }
    else {
        std::cout << name << "не может взлететь\n";
    }
}

void Bird::chirp() {
    std::cout << name << "чирикает \n";
}

void Bird::layEgg() {
    eggsLaid++;
    std::cout << name << "выпали €йца " << eggsLaid << "\n";
}