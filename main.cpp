#include <iostream>
#include <ostream>
#include <set>
#include <map>
#include <stack>
#include <queue>

using namespace std;


class House{
    private:
        string address;
    protected:
        int rent;
        int maxOccupants;
        double crimeRate;
        string shortSummary;
    public:
        House() : address("Unkown"), rent(0), maxOccupants(0), crimeRate(0), shortSummary("A house"){}
        House(string address, int rent, int maxOccupants, double crimeRate, string shortSummary);
        void setRent(int rent) { this->rent = rent;}
        void setOccupants(int occupants) { this->maxOccupants = occupants;}
        void setCrimeRate(double crimeRate) { this->crimeRate = crimeRate;}
        void setSummary(string summary) { this->shortSummary = summary;}
        void setAdress(string address) { this->address = address;}
        int getRent() const {return rent;}
        int getOccupants() const {return maxOccupants;}
        double getCrimeRate() const {return crimeRate;}
        string getSummary() const {return shortSummary;}
        void printInfo();
};

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


int main(){
    
}