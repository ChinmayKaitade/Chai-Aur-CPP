#include <iostream>
using namespace std;

int main(){
    string teaTypes[5] = {"Oolong Tea","Orange Tea","Green Tea", "Black Tea", "Lemon Tea"};

    for(int i = 0; i < 5  ;i++){
        cout << "Brewing " << teaTypes[i] << "..." << endl;

        for(int j = 0; j <= 3 ;j++){
            cout << "Brewing " << j << "cup of " << teaTypes[i] << endl;
        }
    }

     return 0;
}