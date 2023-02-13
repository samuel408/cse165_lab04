#include <iostream>
#include "Stack.h"

using namespace std;

int main (){

    int size;
    cout << "how many numbers?: " ;
    cin >> size;
    Stack stack;
    
    stack.initialize();//initialize stash structure

    for(int i = 0; i < size;i++ ){
        double j = double(i);
        stack.push(&j);
    }

    for( int i = 0; i < size; i++){

        cout << *((double*)stack.pop())<<endl;
    }

    stack.cleanup();
    cout << endl;

    return 0;
}