#include "Dog.hpp"
#include "Cat.hpp"
#include "Bird.hpp"
#include "FlyingCat.hpp"
#include <iostream>

int main() {
    std::cout << "сабачина\n";
    Dog myDog("Пес", 3, 25.5, "чел", true);
    myDog.eat();        
    myDog.bark();       
    myDog.fetch();      
    std::cout << "\n";

    std::cout << "кот\n";
    Cat myCat("котяра", 5, 4.2, "черн", true);
    myCat.sleep();      
    myCat.purr();       
    myCat.huntMouse(); 
    std::cout << "\n";

    std::cout << "птица\n";
    Bird myBird("птаха", 1, 0.3, 0.4, true);
    myBird.makeNoise(); 
    myBird.fly();       
    myBird.layEgg();    
    std::cout << "\n";

    std::cout << "леталкот\n";
    FlyingCat superCat("йап", 2, 3.5, 0.6, "синий", 150.0);


    superCat.useMagic();
    superCat.aerialAttack();


    superCat.fly();
    superCat.purr();

    return 0;
}