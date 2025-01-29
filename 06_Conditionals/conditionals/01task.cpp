#include <iostream>
#include <string>
using namespace std;

int main(){
    string teaOrder;
    cout << "Enter your tea Order";
    getline(cin, teaOrder);

    if(teaOrder == "Green Tea"){
        cout << "You have ordered Green Tea" << endl;
    }

    return 0;
}