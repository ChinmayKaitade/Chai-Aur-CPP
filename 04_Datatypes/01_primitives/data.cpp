#include <iostream>

using namespace std;

int main(){
    int teaLeaves = 50;
    float waterTemperature = 85.5;
    // float waterTemperature = 85.59999; --> 85.6
    double priceOfTea = 299.99;
    // double priceOfTea = 299.99999999999; --> 300
    char teaGrade = 'A';
    // char teaGrade = 'ABC'; --> C (always prints last value)
    bool isTeaReady = false;

    cout << isTeaReady << endl; // false - 0, true - 1
    
    return 0;
}