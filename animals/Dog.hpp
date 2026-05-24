#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <string>

class Dog : public Animal {
private:
    std::string breed;
    bool isTrained;
    int fetchCount;

public:
    Dog(const std::string& name, int age, double weight, const std::string& breed, bool isTrained);

    void bark();
    void fetch();
    void wagTail();
};

#endif