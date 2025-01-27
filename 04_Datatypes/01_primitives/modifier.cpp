#include <iostream>

using namespace std;

int main(){
    unsigned smallTeaPack = 100; // 100
    // unsigned smallTeaPack = -100; --> It will not throw error but it will give garbage value 
    // int smallTeaPack = -100; --> -100

    long largeTeaStorage = 10000000; // 10000000
    // double largeTeaStorage = 10000000; --> 1e+07
    // float largeTeaStorage = 10000000; --> 1e+07
    // long long largeTeaStorage = 100000000000000000; --> 100000000000000000

    short teaSample = 25; // 25
    

    cout << teaSample << endl;
    
    return 0;
}

// unsigned --> User will not take sign elements (that is user will not enter any sign value.ex. -ve value, -100, etc. )