#include <iostream>
using namespace std;

int main(){
    int teaCups;
    cout << "Enter the number of Tea cups to serve: ";
    cin >> teaCups;

    // while loop
    while(teaCups > 0){
        cout << "Serving cups of Tea \n" << teaCups << " Remaining" << endl;
        teaCups --;
    }

    cout << "All Tea cups are served. " << endl;

     return 0;
}