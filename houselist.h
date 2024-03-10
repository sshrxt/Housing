#pragma once
#include "house.h"
#include <iostream>
#include <ostream>

using namespace std;

class HouseNode {
    public:
        House* house;
        HouseNode* next;
        HouseNode* prev;
        HouseNode() : house(nullptr), next(nullptr), prev(nullptr){}
        HouseNode(House* newHouse) : house(newHouse), next(nullptr), prev(nullptr){}
};

class HouseList {
    private:
        int size;
        HouseNode* head;
    public:
        HouseList() : size(0), head(nullptr){}
        void push_front(House* newHouse);
        void printAllHouses();
};