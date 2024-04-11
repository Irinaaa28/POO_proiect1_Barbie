#include "Dress.h"
#include <iostream>
#include <string>

Dress::Dress(const std::string& garmentCode, const std::string& garmentColor) : Garment(garmentCode, garmentColor) {}

void Dress::show() 
{
    std::cout << "Dress: " << garmentCode << ", color: " << garmentColor << std::endl;
}

void Dress::setDress(const std::string& dressName, const std::string& colorName) 
{
    garmentCode = dressName;
    garmentColor = colorName;
}

Dress& Dress::operator=(const Dress& other)
{
    if (this != &other) 
    {
        garmentCode = other.garmentCode;
        garmentColor = other.garmentColor;
    }
    return *this;
}

Dress::Dress(const Dress& other) : Garment(other) {}

Dress::~Dress() = default;
/*{
    std::cout << "Destructor for " << garmentCode << " " << garmentColor << std::endl;
}*/

std::ostream& operator<<(std::ostream& os, const Dress& b) 
{
    os << "Dress: " << b.garmentCode << ", color: " << b.garmentColor;
    return os;
}

std::istream& operator>>(std::istream& is, Dress& b) 
{
    std::cout << "Dress_code: ";
    is >> b.garmentCode;
    std::cout << "color: ";
    is >> b.garmentColor;
    return is;
}