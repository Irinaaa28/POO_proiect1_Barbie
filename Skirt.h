#ifndef SKIRT_H
#define SKIRT_H

#include "Garment.h"
#include <iostream>
#include <string>

class Skirt : public Garment 
{
public:
    Skirt(const std::string& garmentCode, const std::string& garmentColor);
    void show();
    void setSkirt(const std::string& skirtName, const std::string& colorName);
    Skirt& operator=(const Skirt& other);
    Skirt(const Skirt& other);
    ~Skirt();
    friend std::ostream& operator<<(std::ostream& os, const Skirt& b);
    friend std::istream& operator>>(std::istream& is, Skirt& b);
};

#endif