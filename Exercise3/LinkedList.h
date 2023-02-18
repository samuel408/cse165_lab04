#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
using namespace std;

struct LinkedList{
  struct Link {
		void* data;
		Link* next;
		
		void initialize(void* dat, Link* nxt) {
			data = dat;
			next = nxt;
		}
	}* head;
    public:

 
   void add(Link* l, int n) {
        for (int i = 0; i < n; i++) {
            Link* newLink = new Link;
            newLink->data = &i;
            newLink->next = nullptr;

            newLink->next = l->next;
            l->next = newLink;

            while (l->next != nullptr) {
                l = l->next;
            }
            l->next = nullptr;
        }
    }	
	void print();
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
