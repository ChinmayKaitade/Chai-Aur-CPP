//? Task to learn loop in C++ 🔥🚀

//? 1. While Loop
//? Challenge:
// **Write a program that keeps track of tea orders. Each time a cup of tea is made, decrease the number of cups remaining. The loop should run until all cups are served.**
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

//? 2. Do-While Loop
//? Challenge:
// **Create a program that asks the user if they want more tea. Keep asking them until they type "no" (case-insensitive), using a do-while loop.**
#include <iostream>
using namespace std;

int main(){
    string response;

    do{
        cout << "Do You want more Tea (yes/no): ";
        getline(cin, response);
    }while(response != "No" || response != "no");

    cout << "Okay, no more tea!" << endl;
}

//? 3. For Loop
//? Challenge:
// **Write a program that prints the brewing instructions for making 5 cups of tea. The brewing process should be printed once for each cup using a for loop.**
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

//? 4. Break Keyword
//? Challenge:
// **Write a program that keeps serving tea until the user says they’ve had enough (input 'stop'). Use a break statement to exit the loop when the user types 'stop'.**
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

//? 5. Continue Keyword
//? Challenge:
// **Write a program that skips brewing green tea if the user dislikes it. Use a continue statement to skip over green tea but brew other types of tea in a list.**
#include <iostream>
using namespace std;

int main(){
    string teaTypes[5] = {"Oolong Tea","Orange Tea","Green Tea", "Black Tea", "Lemon Tea"};

    for(int i = 0; i < 5; i++){
        if(teaTypes[i] == "Green Tea"){
        cout << "Skipping the " << teaTypes[i] << endl;
        continue;
    }

    cout << "Brewing " << teaTypes[i] << "..." << endl;
    }

     return 0;
}

//? 6. Nested Loops
//? Challenge:
// **Write a program that brews multiple cups of different types of tea. For each type of tea, brew 3 cups using a nested loop.**
#include <iostream>
using namespace std;

int main(){
    string teaTypes[5] = {"Oolong Tea","Orange Tea","Green Tea", "Black Tea", "Lemon Tea"};

    for(int i = 0; i < 5  ;i++){
        cout << "Brewing " << teaTypes[i] << "..." << endl;

        for(int j = 0; j <= 3 ;j++){
            cout << "Brewing " << j << "cup of " << teaTypes[i] << endl;
        }
    }

     return 0;
}