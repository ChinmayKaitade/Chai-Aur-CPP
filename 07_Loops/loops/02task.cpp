#include <iostream>
using namespace std;

int main(){
    string response;

    do{
        cout << "Do You want more Tea (yes/no): ";
        getline(cin, response);
    }while(response != "No" || response != "no");

    cout << "Okay, no more tea!" << endl;
}