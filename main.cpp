#include <iostream>
#include <ostream>
#include "house.h"
#include "houselist.h"


int main(){
    House* house1 = new House("8837 Robin");
    House* house2 = new House("Hollyberry");
    House* house3 = new House("Bianco Terrace");
    
    HouseList myHouses;
    


    Apartment* myApartment = new Apartment("Chicago");
    Studio* myStudio = new Studio("Oksansa");
    
    myHouses.push_back(myApartment);
    myHouses.push_back(myStudio);

    myHouses.printAllHouses();
    
}