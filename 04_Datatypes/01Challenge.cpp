// Challenge 1 ✅
// Tea Information Display Write a Program that declares variables to store the type of tea, its price per kilogram (float), and its rating (char). Use data types effectively and print them in a formatted output escape sequences.
// > Hint: Use \n for new lines and \" to quote the tea name.
#include <iostream>
#include <string>

using namespace std;

int main(){
    string favoriteTea = "\"Ice Tea\"";
    float pricePerKG = 30.30;
    char teaRating = 'A';

    cout << "Your Favorite Tea is " << favoriteTea  << "\nThe price of "<< favoriteTea << " is " << pricePerKG << " Per KG" << "\nRating of Tea is " << teaRating;


    return 0;
}

// Output :
// Your Favorite Tea is "Ice Tea"
// The price of "Ice Tea" is 30.3 Per KG
// Rating of Tea is A

// Challenge 2 ✅
// Modify Tea Prices create a program where the user inputs a base price of tea. Use type casting to increase the price by 10% and display the rounded new price using explicit casting.
// > Hint: Use both float and int types, and demonstrate type casting.
#include <iostream>

using namespace std;

int main(){
    float basePriceOfTea;

    cout << "Enter the Base Price Of Tea: ";
    cin >> basePriceOfTea;

    // Increasing the price by 10%
    float new_price = basePriceOfTea * 1.10;

    // Explicit type casting to int (rounding off)
    int rounded_price = static_cast<int>(new_price);

    // Displaying the final price
    cout << "New price after 10% increase (rounded): " << rounded_price << endl;

    return 0;
}

// Output -
// Enter the Base Price Of Tea: 10.2
// New price after 10% increase (rounded): 11


// Challenge 3 ✅
// Favorite Tea Input write a program that takes the user's favorite tea as input using getline and also asks how many cups of tea they want using cin. Display the result in a fun language.
// > Hint: Combine cin and getline carefully to avoid input issues.
#include <iostream>
#include <string>

using namespace std;

int main(){
    string favoriteTea;
    string teaQuantity;

    cout << "Please Enter Your Favorite Tea?" << endl;
    getline(cin, favoriteTea);

    cout << "How many cups of " << favoriteTea << " would you like? \n" << endl;
    cin >> teaQuantity;

    // Displaying the result in a fun way
    cout << "\nWow! " << teaQuantity << " cups of " << favoriteTea << " coming right up!\n";
    cout << "Hope you enjoy your tea party!\n"; 
    
    return 0;
}

// Output -
// Please Enter Your Favorite Tea?
// Ice Tea
// How many cups of Ice Tea would you like?
// 04

// Wow! 04 cups of Ice Tea coming right up!
// Hope you enjoy your tea party!


