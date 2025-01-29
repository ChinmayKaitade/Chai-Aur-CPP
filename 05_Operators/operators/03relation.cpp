#include <iostream>
using namespace std;

int main(){
    int cups;

    cout << "Enter the number of cups you have";
    cin >> cups;


    if (cups > 20){
        cout << "You will get a GOLD Badge!" << endl;
    }else if (cups>= 20 && cups <= 20){
        cout << "You will get a SILVER Badge!" << endl;
    }else{
        cout << "No Badge for You!" << endl;
    }

    return 0;
}