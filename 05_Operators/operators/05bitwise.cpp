#include <iostream>
using namespace std;

int main() {
    int stock = 5; // Binary: 101 (Green and Oolong in stock)
    
    cout << "Tea Types:\n1 - Green Tea\n2 - Black Tea\n4 - Oolong Tea\n";
    cout << "Enter the tea type you want to check (1, 2, or 4): ";
    
    int choice;
    cin >> choice;

    if (choice == 1 || choice == 2 || choice == 4) {
        if (stock & choice) {
            cout << "The selected tea is in stock.\n";
        } else {
            cout << "The selected tea is NOT in stock.\n";
        }
    } else {
        cout << "Invalid input! Please enter 1, 2, or 4.\n";
    }

    return 0;
}