#include <iostream>
#include "Stash.h"

using namespace std;

int main (){

    int size;
    cout << "how many numbers?: " ;
    cin >> size;
    Stash stash;
    
    stash.initialize(size);//initialize stash structure

    for(int i = 0; i < size;i++ ){
        double j = double(i);
        stash.add(&j);
    }

    for( int i = 0;i < stash.count(); i++){
        cout << *((double*)stash.fetch(i))<<endl;
    }

    stash.cleanup();

    return 0;
}