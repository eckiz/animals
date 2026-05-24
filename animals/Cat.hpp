#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <string>

class Cat : public Animal {
private:
    std::string eyeColor;
    bool isLazy;
    int livesLeft;

public:
    Cat(const std::string& name, int age, double weight, const std::string& eyeColor, bool isLazy);

    void purr();
    void scratchFurniture();
    void huntMouse();
};

#endif