#include "Pants.h"
#include <iostream>
#include <string>

Pants::Pants(const std::string& garmentCode, const std::string& garmentColor) : Garment(garmentCode, garmentColor) {}

void Pants::show() 
{
    std::cout << "Pants: " << garmentCode << ", color: " << garmentColor << std::endl;
}

void Pants::setPants(const std::string& pantsName, const std::string& colorName) 
{
    garmentCode = pantsName;
    garmentColor = colorName;
}

Pants& Pants::operator=(const Pants& other)
{
    if (this != &other) 
    {
        garmentCode = other.garmentCode;
        garmentColor = other.garmentColor;
    }
    return *this;
}

Pants::Pants(const Pants& other) : Garment(other) {}

Pants::~Pants() = default;
/*{
    std::cout << "Destructor for " << garmentCode << " " << garmentColor << std::endl;
}*/

std::ostream& operator<<(std::ostream& os, const Pants& b) 
{
    os << "Pants: " << b.garmentCode << ", color: " << b.garmentColor;
    return os;
}

std::istream& operator>>(std::istream& is, Pants& b) 
{
    std::cout << "Pants_code: ";
    is >> b.garmentCode;
    std::cout << "color: ";
    is >> b.garmentColor;
    return is;
}