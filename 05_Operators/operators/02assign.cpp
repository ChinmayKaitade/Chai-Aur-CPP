#include <iostream>
using namespace std;

int main(){
    int teaBags;

    cout << "Enter the number of Tea Bags have: ";
    cin >> teaBags;

    if(teaBags <= 10){
        // teaBags = teaBags + 5;
        teaBags += 5;
    }
    cout << "Your Total Bags are: " << teaBags << endl;

    return 0;
}