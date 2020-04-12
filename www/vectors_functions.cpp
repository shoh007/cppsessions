#include <iostream>
#include <vector>
#include <string>
using namespace std;

void func(string a) {
    cout << "func() is running: " << a << endl;
}

int main() {
//    int arr0[10];
//    for(int n = 0; n < 10; n++)
//        arr0[n] = n;
//
//
//    int N = 5;
//    vector<int>arr;
//    for(int n = 0; n < 10; n++)
//        arr.push_back(arr0[n]);
//
//    for(int n = 0; n < N; n++)
//        arr.push_back(n);
//    arr.erase(arr.begin() + N/2);
//
//    for(int n = 0; n < arr.size(); n++)
//        cout << arr[n] << endl;
    
    int (*myPrint)(const char * __restrict, ...) = printf;
    myPrint("printf() is running\n");
    
    void (*myFunc)(string) = func;
    myFunc("hola");
    
    return 0;
}
