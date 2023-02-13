#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

struct LinkedList{
  struct Link {
		void* data;
		Link* next;
		
		void initialize(void* dat, Link* nxt) {
			data = dat;
			next = nxt;
		}
	}* head;

	void add(LinkedList::Link* l, int n){
        
    }

	void print(){

    }

    void cleanup() {
		if (head == 0){
			std::cout << "list is empty";
		}
		else {
			std::cout << "list  is not empty";
		}
	}	
    
    };

    #endif
