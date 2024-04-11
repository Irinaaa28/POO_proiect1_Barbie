#ifndef DRESS_H
#define DRESS_H

#include "Garment.h"
#include <iostream>
#include <string>

class Dress : public Garment 
{
public:
    Dress(const std::string& garmentCode, const std::string& garmentColor);
    void show();
    void setDress(const std::string& dressName, const std::string& colorName);
    Dress& operator=(const Dress& other);
    Dress(const Dress& other);
    ~Dress();
    friend std::ostream& operator<<(std::ostream& os, const Dress& b);
    friend std::istream& operator>>(std::istream& is, Dress& b);
};

#endif