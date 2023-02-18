#ifndef STACK_H
#define STACK_H

#include <iostream>

struct Stack {
	struct Link {
		void* data;
		Link* next;

		void initialize(void* dat, Link* nxt){
			data = dat;
			next = nxt;

		}
	}* head;
	
	void (*deletecb)(void*);
  
    void setDeleteCallback(void (*delcb)(void* pt)) {
        deletecb = delcb;
    }
	
	void initialize(){
		head = 0;
		deletecb = nullptr;

	}
	
	void push(void* dat){
		Link* newLink = new Link;
		newLink->initialize(dat, head);
		head = newLink;
	}
	
	void* peek(){
		if (head == 0){
			std::cout << "Stack is empty";
		}
		return head->data;
	}
	
	void* pop(){
		if(head == 0)
			return 0;
		
		void* result = head->data;
		Link* oldHead = head;
		head = head->next;
		delete oldHead;
		return result;
	}
	
	void cleanup(){
		if (head == 0){
			std::cout << "Stack is empty";
		}
		else {
			std::cout << "Stack is not empty";
		}
        if (deletecb) {
            deletecb((void*)(head));
        }
    
    	delete[] head;
    	deletecb = nullptr;
	}

};
#endif