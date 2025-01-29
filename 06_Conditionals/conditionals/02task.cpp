#include <iostream>
using namespace std;

int main(){
    int hours;
    cout << "Enter the current hour (0-23): ";
    cin >> hours;

    if(hours >= 8 && hours <= 18){
        cout << "Tea Shop is Open!" << endl;
    }else{
        cout << "Tea Shop is Closed!" << endl;
    }

    return 0;
}