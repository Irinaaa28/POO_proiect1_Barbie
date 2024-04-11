#include "Garment.h"
#include <iostream>
#include <string>

Garment::Garment(const std::string& garmentCode, const std::string& garmentColor) : garmentCode(garmentCode), garmentColor(garmentColor) {}

std::string Garment::getCode() const 
{
    return garmentCode;
}

std::string Garment::getColor() const 
{
    return garmentColor;
}