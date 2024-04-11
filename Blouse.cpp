#include "Blouse.h"
#include <iostream>
#include <string>

Blouse::Blouse(const std::string& garmentCode, const std::string& garmentColor) : Garment(garmentCode, garmentColor) {}

void Blouse::show() 
{
    std::cout << "Blouse: " << garmentCode << ", color: " << garmentColor << std::endl;
}

void Blouse::setBlouse(const std::string& blouseName, const std::string& colorName) 
{
    garmentCode = blouseName;
    garmentColor = colorName;
}

Blouse& Blouse::operator=(const Blouse& other)
{
    if (this != &other) 
    {
        garmentCode = other.garmentCode;
        garmentColor = other.garmentColor;
    }
    return *this;
}

Blouse::Blouse(const Blouse& other) : Garment(other) {}

Blouse::~Blouse() = default;
/*{
    std::cout << "Destructor for " << garmentCode << " " << garmentColor << std::endl;
}*/

std::ostream& operator<<(std::ostream& os, const Blouse& b) 
{
    os << "Blouse: " << b.garmentCode << ", color: " << b.garmentColor;
    return os;
}

std::istream& operator>>(std::istream& is, Blouse& b) 
{
    std::cout << "Blouse_code: ";
    is >> b.garmentCode;
    std::cout << "color: ";
    is >> b.garmentColor;
    return is;
}
