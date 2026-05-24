#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
protected:
    std::string name;
    int age;
    double weight;

public:
    Animal(const std::string& name, int age, double weight);

    void eat();
    void sleep();
    void makeNoise();
};

#endif