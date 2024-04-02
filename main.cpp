///Barbie dress up concept
#include <iostream>
#include <string>

class Garment
{
protected:
    std::string garmentCode;
    std::string garmentColor;
public:
    Garment(const std::string& garmentCode, const std::string& garmentColor): garmentCode(garmentCode), garmentColor(garmentColor) {}
    std::string getCode() const //getter code
    {
        return garmentCode;
    }
    std::string getColor() const //getter color
    {
        return garmentColor;
    }
};

class Blouse : public Garment
{
public:
    //Blouse(const std::string& garmentCode = "", const std::string& garmentColor = ""): Garment(garmentCode, garmentColor) {}
    Blouse(const std::string& garmentCode, const std::string& garmentColor): Garment(garmentCode, garmentColor) {}
    void show()
    {
        std::cout << "Blouse: " << garmentCode << ", color: " << garmentColor << std::endl;
    }
    void setBlouse(const std::string& blouseName, const std::string& colorName) //setter
    {
        garmentCode = blouseName;
        garmentColor = colorName;
    }
    Blouse& operator=(const Blouse& other) //operator=
    {
        if(this != &other)
        {
            garmentCode = other.garmentCode;
            garmentColor = other.garmentColor;
        }
        return *this;
    }
    Blouse(const Blouse& other) : Garment(other.garmentCode, other.garmentColor) {} // Constructor de copiere
    ~Blouse() //destructor
    {
        std::cout << "Destructor for " << garmentCode << " " << garmentColor << std::endl;
    }
    friend std::ostream& operator<<(std::ostream& os, const Blouse& b) //operator<<
    {
        os << "Blouse: " << b.garmentCode << ", color: " << b.garmentColor;
        return os;
    }
    friend std::istream& operator>>(std::istream& is, Blouse& b) //operator>>
    {
        std::cout << "Blouse_code: ";
        is >> b.garmentCode;
        std::cout << "color: ";
        is >> b.garmentColor;
        return is;
    }
};

class Dress : public Garment
{

};
 
class Skirt : public Garment
{

};

class Pants : public Garment
{

};
using namespace std;
int main()
{
    Blouse blouse1("#BT1CR", "Red"), blouse2("#BT1CB", "Blue"), blouse3("#BT1CG", "Green"), blouse4("#BT1CY", "Yellow");
    blouse1.show();
    blouse1 = blouse3;
    blouse1.show();
    blouse2.setBlouse("#BT3CP", "Purple");
    blouse2.show();
    return 0;
}