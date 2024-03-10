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
    myHouses.push_front(house1);
    myHouses.push_front(house2);
    myHouses.push_front(house3);
    myHouses.push_front(house4);


    myHouses.printAllHouses();
}