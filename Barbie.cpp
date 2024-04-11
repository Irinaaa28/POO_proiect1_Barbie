#include "Barbie.h"
#include <iostream>
#include <string>

Barbie::Barbie(const Blouse& currentBlouse, const Dress& currentDress, const Skirt& currentSkirt, const Pants& currentPants) : currentBlouse(currentBlouse), currentDress(currentDress), currentSkirt(currentSkirt), currentPants(currentPants) {}

void Barbie::addBlouse(const Blouse& blouse) 
{
    currentBlouse = blouse;
}

void Barbie::addDress(const Dress& dress) 
{
    currentDress = dress;
}

void Barbie::addSkirt(const Skirt& skirt) 
{
    currentSkirt = skirt;
}

void Barbie::addPants(const Pants& pants) 
{
    currentPants = pants;
}

void Barbie::removeBlouse() 
{
    currentBlouse.setBlouse("none", "none");
}

void Barbie::removeDress() 
{
    currentDress.setDress("none", "none");
}

void Barbie::removeSkirt() 
{
    currentSkirt.setSkirt("none", "none");
}

void Barbie::removePants() 
{
    currentPants.setPants("none", "none");
}

void Barbie::display() const 
{
    std::cout << "Barbie is wearing: \n";
    std::cout << currentBlouse<< std::endl;
    std::cout << currentDress<< std::endl;
    std::cout << currentSkirt<< std::endl;
    std::cout << currentPants<< std::endl;
}