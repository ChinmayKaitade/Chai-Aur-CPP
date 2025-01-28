#include <iostream>
using namespace std;

int main(){
    bool isStudent;
    int cups;
    cout << "Are You a Student (1 for Yes and 0 for No) ?";
    cin >> isStudent;

    cout << "How many cups of Tea have you purchased ?";
    cin >> cups;

    if (isStudent || cups > 15){
        cout << "You are eligible for discount " << endl;
    }else{
        cout << "You are not eligible for discount " << endl;
    }

    return 0;
}