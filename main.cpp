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
public:
    //Dress(const std::string& garmentCode = "", const std::string& garmentColor = ""): Garment(garmentCode, garmentColor) {}
    Dress(const std::string& garmentCode, const std::string& garmentColor): Garment(garmentCode, garmentColor) {}
    void show()
    {
        std::cout << "Dress: " << garmentCode << ", color: " << garmentColor << std::endl;
    }
    void setDress(const std::string& dressName, const std::string& colorName) //setter
    {
        garmentCode = dressName;
        garmentColor = colorName;
    }
    Dress& operator=(const Dress& other) //operator=
    {
        if (this != &other)
        {
            garmentCode = other.garmentCode;
            garmentColor = other.garmentColor;
        }
        return *this;
    }
    Dress(const Dress& other): Garment(other.garmentCode, other.garmentColor) {} //constructor de copiere
    ~Dress() //destructor
    {
        std::cout << "Destructor for " << garmentCode << " " << garmentColor << std::endl;
    }
    friend std::ostream& operator<<(std::ostream& os, const Dress& d) //operator<<
    {
        os << "Dress: " << d.garmentCode << ", color: " << d.garmentColor;
        return os;
    }
    friend std::istream& operator>>(std::istream& is, Dress& d) //operator>>
    {
        std::cout << "Dress_code: ";
        is >> d.garmentCode;
        std::cout << "color: ";
        is >> d.garmentColor;
        return is;
    }
};

class Skirt : public Garment
{
public:
    //Skirt(const std::string& garmentCode = "", const std::string& garmentColor = ""): Garment(garmentCode, garmentColor) {}
    Skirt(const std::string& garmentCode, const std::string& garmentColor): Garment(garmentCode, garmentColor) {}
    void show()
    {
        std::cout << "Skirt: " << garmentCode << ", color: " << garmentColor << std::endl;
    }
    void setSkirt(const std::string& skirtName, const std::string& colorName) //setter
    {
        garmentCode = skirtName;
        garmentColor = colorName;
    }
    Skirt& operator=(const Skirt& other) //operator=
    {
        if (this != &other)
        {
            garmentCode = other.garmentCode;
            garmentColor = other.garmentColor;
        }
        return *this;
    }
    Skirt(const Skirt& other): Garment(other.garmentCode, other.garmentColor) {} //constructor de copiere
    ~Skirt()
    {
        std::cout << "Destructor for " << garmentCode << " " << garmentColor << std::endl;
    }
    friend std::ostream& operator<<(std::ostream& os, const Skirt& s) //operator<<
    {
        os << "Skirt: " << s.garmentCode << ", color: " << s.garmentColor;
        return os;
    }
    friend std::istream& operator>>(std::istream& is, Skirt& s) //operator>>
    {
        std::cout << "Skirt_code: ";
        is >> s.garmentCode;
        std::cout << "color: ";
        is >> s.garmentColor;
        return is;
    }
};

class Pants : public Garment
{
public:
    //Pants(const std::string& garmentCode = "", const std::string& garmentColor = ""): Garment(garmentCode, garmentColor) {}
    Pants(const std::string& garmentCode, const std::string& garmentColor): Garment(garmentCode, garmentColor) {}
    void show()
    {
        std::cout << "Pants: " << garmentCode << ", color: " << garmentColor << std::endl;
    }
    void setPants(const std::string& pantsName, const std::string colorName) //setter
    {
        garmentCode = pantsName;
        garmentColor = colorName;
    }
    Pants& operator=(const Pants& other) //operator=
    {
        if (this != &other)
        {
            garmentCode = other.garmentCode;
            garmentColor = other.garmentColor;
        }
        return *this;
    }
    Pants(const Pants& other): Garment(other.garmentCode, other.garmentColor) {} //constructor de copiere
    ~Pants()
    {
        std::cout << "Destructor for " << garmentCode << " " << garmentColor << std::endl;
    }
    friend std::ostream& operator<<(std::ostream& os, const Pants& p) //operator<<
    {
        os << "Pants: " << p.garmentCode << ", color: " << p.garmentColor;
        return os;
    }
    friend std::istream& operator>>(std::istream& is, Pants& p) //operator>>
    {
        std::cout << "Pants_code: ";
        is >> p.garmentCode;
        std::cout << "color: ";
        is >> p.garmentColor;
        return is;
    }
};

int main()
{
    Blouse blouse1("#BT1CR", "Red"), blouse2("#BT1CB", "Blue"), blouse3("#BT1CG", "Green"), blouse4("#BT1CY", "Yellow");
    Dress dress1("#DT1CR", "Red"), dress2("#DT1CB", "Blue"), dress3("#DT1CG", "Green"), dress4("#DT1CY", "Yellow");
    Skirt skirt1("#ST1CR", "Red"), skirt2("#ST1CB", "Blue"), skirt3("#ST1CG", "Green"), skirt4("#ST1CY", "Yellow");
    Pants pants1("#PT1CR", "Red"), pants2("#PT1CB", "Blue"), pants3("#PT1CG", "Green"), pants4("#PT1CY", "Yellow");
    blouse1.show();
    blouse1 = blouse3;
    blouse1.show();
    blouse2.setBlouse("#BT3CP", "Purple");
    blouse2.show();

    dress3.show();
    dress3 = dress2;
    dress2.setDress("#DT2CY", "Yellow");
    dress2.show();

    skirt1.setSkirt("#ST1CP", "Pink");
    skirt2 = skirt4;
    skirt1.show();
    skirt2.show();

    pants3 = pants1;
    pants3.show();
    pants1.setPants("#PT2CB", "Blue");
    pants1.show();
    return 0;
}