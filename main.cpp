#include <iostream>
#include <ostream>
#include "house.h"
#include "houselist.h"


int main(){
    House* house1 = new House("8837 Robin");
    House* house2 = new House("Bay Colony");
    House* house3 = new House("Hollyberry");
    House* house4 = new House("Bianco Terrace");
    
    HouseList myHouses;
    


    Apartment* myApartment = new Apartment("Chicago");
    
    myHouses.push_back(myApartment);
    myHouses.push_back(house1);
    myHouses.push_back(house2);
    myHouses.push_back(house4);
    myHouses.push_back(house3);

    myHouses.printAllHouses();
    
}