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
    void show()
    {
        std::cout << garmentCode << " " << garmentColor << std::endl;
    }
};

class Blouse : public Garment
{

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
    Garment blouse("#BT1CR", "red");
    blouse.show();
    return 0;
}