//
//  main.cpp
//  DoublyLinkedList
//
//  Created by Nahom dagnew on 4/23/20.
//  Copyright © 2020 Nahom dagnew. All rights reserved.
//
#include <stdio.h>
#include <string>
#include "iostream"
#include <iostream>
#include "DoublyLinkedList.hpp"


int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    DLinkedList first;
    cout << "Nahom Dagnew";
    first.addFront("Back");
    first.addFront("Middle");
    first.addFront("Front");
    first.printAll();
    first.front();
   // first.find("Front");
    
    
    
    return 0;
}
