#include "FlyingCat.hpp"
#include <iostream>

FlyingCat::FlyingCat(const std::string& name, int age, double weight,
    double wingspan, const std::string& eyeColor, double maxAltitude)
    : Bird(name + " птица", age, weight, wingspan, true),
    Cat(name + " кот", age, weight, eyeColor, false),
    maxFlightAltitude(maxAltitude), magicEnergy(100) {
}

void FlyingCat::useMagic() {
    magicEnergy -= 20;
    std::cout << "колдует наглец " << magicEnergy << "\n";
}

void FlyingCat::aerialAttack() {
    std::cout << "летит " << maxFlightAltitude << " чтобы напасть\n";
}