//
//  DoublyLinkedList.cpp
//  DoublyLinkedList
//
//  Created by Nahom dagnew on 4/23/20.
//  Copyright © 2020 Nahom dagnew. All rights reserved.
//

#include "DoublyLinkedList.hpp"
#include "iostream"
DLinkedList::DLinkedList(){
    
    header = new DNode;
    trailer = new DNode;
    header->next = trailer;
    trailer->prev = header;
}

DLinkedList::~DLinkedList(){
    
    while (header->next != trailer) {
        delete header->next;
        header->next = header->next->next;
    }
    delete header;
    delete trailer;
}
void DLinkedList::add(DNode* new_head , const Elem &e){
    DNode* node = new DNode;
    node->elem = e;
    
    node->next = new_head;
    node->prev = new_head->prev;
    new_head->prev->next = node;
    new_head->prev = node;
}

void DLinkedList::addFront(const Elem &e){ add(header->next, e);}

void DLinkedList::addBack(const Elem &e) {add(trailer, e);}

void DLinkedList::remove(DNode *v){
    v->prev->next = v->next;
    v->next->prev = v->prev;
    delete v;
}

bool DLinkedList::empty() const{ return header->next == trailer;}

void DLinkedList::removeBack(){remove(trailer->prev);}

void DLinkedList::removeFront(){remove(header->next);}

const Elem& DLinkedList::back() const{return trailer->prev->elem;}

const Elem& DLinkedList::front() const{return header->next->elem;}

DNode* DLinkedList::find(const Elem& e) const{
    
    while(header->next != trailer){
        if(header->next->elem == e){
            return header->next;
        }
        header->next = header->next->next;
    }
    
    return 0;
}

void DLinkedList::printAll(){
        
    cout<< front() << endl;
    cout << back() << endl;

}

