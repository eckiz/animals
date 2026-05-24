#ifndef FLYING_CAT_HPP
#define FLYING_CAT_HPP

#include "Bird.hpp"
#include "Cat.hpp"

class FlyingCat : public Bird, public Cat {
private:
    double maxFlightAltitude;
    int magicEnergy;

public:

    FlyingCat(const std::string& name, int age, double weight,
        double wingspan, const std::string& eyeColor, double maxAltitude);

    void useMagic();
    void aerialAttack();
};

#endif