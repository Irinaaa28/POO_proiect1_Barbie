#include <iostream>
#include <string>
#include "Garment.h"
#include "Barbie.h"
#include "Blouse.h"
#include "Dress.h"
#include "Skirt.h"
#include "Pants.h"

int main() 
{
    Blouse blouse1("#BT1CR", "Red"), blouse2("#BT1CB", "Blue"), blouse3("#BT1CG", "Green"), blouse4("#BT1CY", "Yellow");
    Dress dress1("#DT1CR", "Red"), dress2("#DT1CB", "Blue"), dress3("#DT1CG", "Green"), dress4("#DT1CY", "Yellow");
    Skirt skirt1("#ST1CR", "Red"), skirt2("#ST1CB", "Blue"), skirt3("#ST1CG", "Green"), skirt4("#ST1CY", "Yellow");
    Pants pants1("#PT1CR", "Red"), pants2("#PT1CB", "Blue"), pants3("#PT1CG", "Green"), pants4("#PT1CY", "Yellow");
    Blouse noneB("none", "none");
    Dress noneD("none", "none");
    Skirt noneS("none", "none");
    Pants noneP("none", "none");

    ///Test for Blouse
    /*blouse1.show();
    blouse1 = blouse3;
    blouse1.show();
    blouse2.setBlouse("#BT3CP", "Purple");
    blouse2.show();*/

    ///Test for Dress
    /*dress3.show();
    dress3 = dress2;
    dress2.setDress("#DT2CY", "Yellow");
    dress2.show();*/

    ///Test for Skirt
    /*skirt1.setSkirt("#ST1CP", "Pink");
    skirt2 = skirt4;
    skirt1.show();
    skirt2.show();*/

    ///Test for Pants
    /*pants3 = pants1;
    pants3.show();
    pants1.setPants("#PT2CB", "Blue");
    pants1.show();*/

    Barbie myBarbie(noneB, noneD, noneS, noneP);

    myBarbie.addDress(dress2);
    myBarbie.display();
    myBarbie.removeDress();
    myBarbie.addBlouse(blouse2);
    myBarbie.addSkirt(skirt3);
    myBarbie.display();
    skirt3.setSkirt("#ST1CP", "Purple");
    skirt1 = skirt3;
    skirt1.show();
    myBarbie.removeSkirt();
    myBarbie.addSkirt(skirt1);
    myBarbie.display();
    
    return 0;
}
