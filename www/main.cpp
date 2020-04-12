#include <iostream>
#include <cmath>
using namespace std;

void _array() {
    /*
    1. if(condition){}
    1. while(condition){}
    2. for(init; condition; increment) {}
     */
    
    int arr[10];
    for(int n = 0; n < 10; n++)
        arr[n] = n + 10;
    
    cout << arr[5] << endl;
}

void _pointer() {
    
}

int main() {
    _array();
    _pointer();
    
    return 0;
}
