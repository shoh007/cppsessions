#include <iostream>
#include <cmath>
using namespace std;

int main_0() {
    /*
    1. if(condition){}
    1. while(condition){}
    2. for(init; condition; increment) {}
     */
    
    int arr[10];
    for(int n = 0; n < 10; n++)
    arr[n] = n;

    cout << arr[0] << endl;
    int* ptr = arr + 5;
    cout << *ptr << endl;
    
    short var = 0b0000000100000010;
    short* a = &var;
    char* b = (char*)&var;
    
    printf("%d, %d\n", *a, *b);
    
    *b = 0b00000100;
    printf("%d, %d\n", *a, *b);
    
    return 0;
}
