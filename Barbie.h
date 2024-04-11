#ifndef BARBIE_H
#define BARBIE_H

#include "Garment.h"
#include "Blouse.h"
#include "Dress.h"
#include "Skirt.h"
#include "Pants.h"
#include <iostream>
#include <string>

class Barbie 
{
private:
    Blouse currentBlouse;
    Dress currentDress;
    Skirt currentSkirt;
    Pants currentPants;
public:
    Barbie(const Blouse& currentBlouse, const Dress& currentDress, const Skirt& currentSkirt, const Pants& currentPants);
    void addBlouse(const Blouse& blouse);
    void addDress(const Dress& dress);
    void addSkirt(const Skirt& skirt);
    void addPants(const Pants& pants);
    void removeBlouse();
    void removeDress();
    void removeSkirt();
    void removePants();
    void display() const;
};

#endif