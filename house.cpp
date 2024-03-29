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

Apartment::Apartment(string address, int rent, int maxOccupants, double crimeRate, string shortSummary, int leaseTerm, string commute) :
    House(address, rent, maxOccupants, crimeRate, shortSummary){
        this->leaseTerm = leaseTerm;
        this->commuteSummary = commute;
    }

void Apartment::printInfo(){
    cout << "House Adress: " << address << endl 
    << "Rent: " << rent << endl 
    << "Max Occupants: " << maxOccupants << endl
    << "Crime Rate: " << crimeRate << endl 
    << "Short Summary: " << shortSummary << endl
    << "Lease Length(in Months): " << leaseTerm << endl
    << "Commute to College: " << commuteSummary << endl;
}

Studio::Studio(string address, int rent, double crimeRate, string shortSummary, int leaseTerm, bool hasPets, string favAspect){
    this->address = address;
    this->rent = rent;
    this->crimeRate = crimeRate;
    this->shortSummary = shortSummary;
    this->leaseTerm = leaseTerm;
    this->hasPets = hasPets;
    this->favAspect = favAspect;
}
void Studio::printInfo(){
    cout << "House Adress: " << address << endl 
    << "Rent: " << rent << endl 
    << "Max Occupants: " << maxOccupants << endl
    << "Crime Rate: " << crimeRate << endl 
    << "Short Summary: " << shortSummary << endl
    << "Lease Length(in Months): " << leaseTerm << endl;
    string pets = (hasPets) ? " Yes!" : " No:(";
    cout << "Has Pets? " << pets << endl
    << "Fav Aspect: " << favAspect << endl;
}

