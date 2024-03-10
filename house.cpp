#include "house.h"

#include <iostream>

using namespace std;

House::House(string address, int rent, int maxOccupants, double crimeRate, string shortSummary){
    this->address = address;
    this->rent = rent;
    this->maxOccupants = maxOccupants;
    this->crimeRate = crimeRate;
    this->shortSummary = shortSummary;
}

void House::printInfo(){
    cout << "House Adress: " << address << endl 
    << "Rent: " << rent << endl 
    << "Max Occupants: " << maxOccupants << endl
    << "Crime Rate: " << crimeRate << endl 
    << "Short Summary: " << shortSummary << endl;
}