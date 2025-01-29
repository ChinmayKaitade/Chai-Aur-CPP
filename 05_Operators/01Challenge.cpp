// Challenges for Students 🔥🚀
//? 1. Challenge 1: Arithmetic Operators
// Write a program that calculates the price of tea packs. A user enters the number of tea packs they want, and the price per pack. Apply a 10% tax to the total price and display the final cost.
// #include <iostream>
// using namespace std;

// int main(){
//     int teaPacks;
//     int pricePerPack;
//     float totalPrice;
//     float newPrice;

//     cout << "How many Tea Packs do you want ?" << endl;
//     cin >> teaPacks;

//     cout << "Enter Price Per Pack " << endl;
//     cin >> pricePerPack;

//     totalPrice = teaPacks * pricePerPack;

//     newPrice = totalPrice * 0.10;

//     cout << "Final Cost for " << teaPacks << " Tea Packs including 10% of discount is " << newPrice << " Rupees" << endl;

//     return 0;
// }


//? 2. Challenge 2: Assignment Operators
// Create a program where the user inputs the number of tea bags they have. If the number is less than 20, give them 10 extra bags using the `+=` assignment operator. Display the updated total.
// #include <iostream>
// using namespace std;

// int main(){
//     int numberOfTeaBags;

//     cout << "How many number of Tea Bags do you have ?" << endl;
//     cin >> numberOfTeaBags;

//     if(numberOfTeaBags < 20){
//         numberOfTeaBags += 10;
//         cout << "Total Number of Tea Bags are: " << numberOfTeaBags << endl;
//     }else{
//         cout << "Number of Bags are: " << numberOfTeaBags << endl;
//     }

//     return 0;
// }


//? 3. Challenge 3: Relational and Logical Operators
// A tea subscription service offers a discount if the user buys more than 12 cups or if they are a member for more than a year. Write a program that checks if the user qualifies for a discount based on their input.
// #include <iostream>
// using namespace std;

// int main(){
//     int buyCups;
//     bool isPremiumMember;

//     cout << "How many cups tea do you want ?" << endl;
//     cin >> buyCups;

//     cout << "You have Premium MemberShip ? (Enter 1 - Yes and 0 - No)";
//     cin >> isPremiumMember;

//     if(buyCups >= 12 || isPremiumMember){
//         cout << "Congratulations, You are Qualified for Discount Coupon!" << endl;
//     }else{
//         cout << "Unfortunately, You are not Qualified for Discount Coupon!" << endl;
//     }

//     return 0;
// }


//? 4. Challenge 4: Bitwise Operators
// Write a program that uses bitwise AND (`&`) to check which tea types are in stock. The stock is encoded in an integer (1 for Green, 2 for Black, 4 for Oolong). Allow the user to check availability by inputting the tea type (1, 2, or 4), and display a message saying whether that tea is in stock or not.
#include <iostream>
using namespace std;

int main() {
    int stock = 5; // Binary: 101 (Green and Oolong in stock)
    
    cout << "Tea Types:\n1 - Green Tea\n2 - Black Tea\n4 - Oolong Tea\n";
    cout << "Enter the tea type you want to check (1, 2, or 4): ";
    
    int choice;
    cin >> choice;

    if (choice == 1 || choice == 2 || choice == 4) {
        if (stock & choice) {
            cout << "The selected tea is in stock.\n";
        } else {
            cout << "The selected tea is NOT in stock.\n";
        }
    } else {
        cout << "Invalid input! Please enter 1, 2, or 4.\n";
    }

    return 0;
}
