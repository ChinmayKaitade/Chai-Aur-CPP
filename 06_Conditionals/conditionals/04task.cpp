#include <iostream>
using namespace std;

int main(){
    int choice;
    double price;

    cout << "Select Your Tea\n";
    cout << "1. Green Tea\n";
    cout << "2. Lemon Tea\n";
    cout << "3. Oolong Tea\n";
    cout << "Enter your choice in number: \n";

    cin >> choice;

    switch(choice){
        case 1:
            price = 2.0;
            cout << "You have selected Green Tea. Price: " << price << endl;
            break;
        case 2:
            price = 3.0;
            cout << "You have selected Lemon Tea. Price: " << price << endl;
            break;
        case 3:
            price = 4.0;
            cout << "You have selected Oolong Tea. Price: " << price << endl;
            break;
        default:
            cout << "Invalid Choice!" << endl;
            break;
    }

     return 0;
}