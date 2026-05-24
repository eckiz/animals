#ifndef BIRD_HPP
#define BIRD_HPP

#include "Animal.hpp"

class Bird : public Animal {
private:
    double wingspan;
    bool canFly;
    int eggsLaid;

public:
    Bird(const std::string& name, int age, double weight, double wingspan, bool canFly);

    void fly();
    void chirp();
    void layEgg();
};

#endif