//
//  DoublyLinkedList.hpp
//  DoublyLinkedList
//
//  Created by Nahom dagnew on 4/23/20.
//  Copyright © 2020 Nahom dagnew. All rights reserved.
//

#ifndef DoublyLinkedList_hpp
#define DoublyLinkedList_hpp

#include <string>
#include <stdio.h>
using namespace std;

typedef string Elem;

class DNode{
private:
    Elem elem;
    DNode* prev;
    DNode* next;
    friend class DLinkedList;
};


class DLinkedList{
public:
    DLinkedList();
    ~DLinkedList();
    bool empty() const;
    const Elem& front() const;
    const Elem& back() const;
    void addFront(const Elem& e);
    void addBack(const Elem& e);
    void removeFront();
    void removeBack();
    void printAll();
   
private:
    DNode* header;
    DNode* trailer;
    
protected:
    
    DNode* find(const Elem& e) const;
    void add(DNode* v, const Elem& e);
    void remove(DNode* v);
    
};

#endif /* DoublyLinkedList_hpp */
