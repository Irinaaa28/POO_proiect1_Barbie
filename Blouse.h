#ifndef BLOUSE_H
#define BLOUSE_H

#include "Garment.h"
#include <iostream>
#include <string>

class Blouse : public Garment 
{
public:
    Blouse(const std::string& garmentCode, const std::string& garmentColor);
    void show();
    void setBlouse(const std::string& blouseName, const std::string& colorName);
    Blouse& operator=(const Blouse& other);
    Blouse(const Blouse& other);
    ~Blouse();
    friend std::ostream& operator<<(std::ostream& os, const Blouse& b);
    friend std::istream& operator>>(std::istream& is, Blouse& b);
};

#endif