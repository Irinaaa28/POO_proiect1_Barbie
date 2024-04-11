#include "Skirt.h"
#include <iostream>
#include <string>

Skirt::Skirt(const std::string& garmentCode, const std::string& garmentColor) : Garment(garmentCode, garmentColor) {}

void Skirt::show() 
{
    std::cout << "Skirt: " << garmentCode << ", color: " << garmentColor << std::endl;
}

void Skirt::setSkirt(const std::string& skirtName, const std::string& colorName) 
{
    garmentCode = skirtName;
    garmentColor = colorName;
}

Skirt& Skirt::operator=(const Skirt& other)
{
    if (this != &other) 
    {
        garmentCode = other.garmentCode;
        garmentColor = other.garmentColor;
    }
    return *this;
}

Skirt::Skirt(const Skirt& other) : Garment(other) {}

Skirt::~Skirt() = default;
/*{
    std::cout << "Destructor for " << garmentCode << " " << garmentColor << std::endl;
}*/

std::ostream& operator<<(std::ostream& os, const Skirt& b) 
{
    os << "Skirt: " << b.garmentCode << ", color: " << b.garmentColor;
    return os;
}

std::istream& operator>>(std::istream& is, Skirt& b) 
{
    std::cout << "Skirt_code: ";
    is >> b.garmentCode;
    std::cout << "color: ";
    is >> b.garmentColor;
    return is;
}