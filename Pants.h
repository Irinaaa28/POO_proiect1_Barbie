#ifndef PANTS_H
#define PANTS_H

#include "Garment.h"
#include <iostream>
#include <string>

class Pants : public Garment 
{
public:
    Pants(const std::string& garmentCode, const std::string& garmentColor);
    void show();
    void setPants(const std::string& pantsName, const std::string& colorName);
    Pants& operator=(const Pants& other);
    Pants(const Pants& other);
    ~Pants();
    friend std::ostream& operator<<(std::ostream& os, const Pants& b);
    friend std::istream& operator>>(std::istream& is, Pants& b);
};

#endif