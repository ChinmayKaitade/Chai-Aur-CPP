#include <iostream>
using namespace std;

int main(){
    int teaCups;
    cout << "How many cups Tea do you want? ";
    cin >> teaCups;

    for(int i = 1; i <= teaCups ; i++){
        cout << "Brewing cup " << i << " of Tea..." << endl;
    }

    cout << "Outside the Loop";

     return 0;
}