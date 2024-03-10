#include "houselist.h"

#include <iostream>
#include <ostream>

using namespace std;

void HouseList::push_front(House* newHouse){
    HouseNode* newNode = new HouseNode(newHouse);

    if(head == nullptr)
    {
        head = newNode;
    }
    else
    {   
        newNode->next = head;
        head = newNode;
    }

    size++;
}

void HouseList::printAllHouses(){
    cout << "There are " << size << " in this list!" << endl << endl;
    HouseNode* current = head;
    while(current != nullptr) {
        current->house->printInfo();
        cout << endl;
        current = current->next;
    }
}
