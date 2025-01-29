#include <iostream>
using namespace std;

int main(){
    string response;

    while(true){
        cout << "Do You want more Tea (Type 'stop' to exit)?: ";
        getline(cin, response);

        if(response == "stop"){
            // exit the loop
            break;
        }

        cout << "Here is your another cup of Tea \n";
    }
        cout << "No more Tea will be served to you!";

     return 0;
}