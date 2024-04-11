#ifndef GARMENT_H
#define GARMENT_H
#include <iostream>
#include <string>

class Garment 
{
protected:
    std::string garmentCode;
    std::string garmentColor;
public:
    Garment(const std::string& garmentCode, const std::string& garmentColor);
    std::string getCode() const;
    std::string getColor() const;
};

#endif