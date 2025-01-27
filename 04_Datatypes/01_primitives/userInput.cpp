#include <iostream>
#include <string>

using namespace std;

int main(){
    string userTea;
    string teaQuantity;

    cout << "What would you like to order in Tea? \n" << endl;
    getline(cin, userTea);

    // asking user from quantity
    cout << "How many cups of " << userTea << "would you like to have? \n" << endl;
    cin >> teaQuantity;

    cout << teaQuantity;
    cout << userTea;

    return 0;
}