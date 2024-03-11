#pragma once

#include <iostream>
#include <ostream>
#include <set>
#include <map>
#include <stack>
#include <queue>

using namespace std;


class House{
    protected:
        string address;
        int rent;
        int maxOccupants;
        double crimeRate;
        string shortSummary;
    public:
        House(string address = "unkown", int rent = 0, int maxOccupants = 0, double crimeRate = 0, string shortSummary = "");
        void setRent(int rent) { this->rent = rent;}
        void setOccupants(int occupants) { this->maxOccupants = occupants;}
        void setCrimeRate(double crimeRate) { this->crimeRate = crimeRate;}
        void setSummary(string summary) { this->shortSummary = summary;}
        void setAddress(string address) { this->address = address;}
        int getRent() const {return rent;}
        int getOccupants() const {return maxOccupants;}
        double getCrimeRate() const {return crimeRate;}
        string getSummary() const {return shortSummary;}
        virtual void printInfo();
};


class Apartment: public House{
    private: 
        int leaseTerm;
        string commuteSummary;
    public:
        Apartment(string address = "unkown", int rent = 0, int maxOccupants = 0, double crimeRate = 0, string shortSummary="", int leaseTerm = 0, string commute = "needs inoput!");
        void printInfo();  
};
