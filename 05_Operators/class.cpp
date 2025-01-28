//? 1. **Arithmetic Operators**

// **Challenge:** Create a program that calculates the total price of tea cups. The user inputs the number of cups they want and the price per cup. The program should calculate the total price, apply a 5% discount if the total is above a certain amount, and show the final price.
// > +, -, \*, /, %

#include <iostream>
using namespace std;

int main(){
    int cups;
    double pricePerCup, totalPrice, discountedPrice;

    cout << "Enter the number of Tea cups: ";
    cin >> cups;
    cout << "Enter the Price per cups: ";
    cin >> pricePerCup;

    totalPrice = cups * pricePerCup;

    // apply 5% discount if total price is above 100
    if (totalPrice > 100) {
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout << "Discounted Price is: " << discountedPrice << endl;
    }else{
        cout << "Total Price is: " << totalPrice << endl; 
    }

    cout << "Regular Code Running..." << endl;

    return 0;
}


//? 2. **Assignment Operators**

// **Challenge:** Write a program that allows a user to input the number of tea bags they have. Assign additional bags to them based on certain conditions (e.g., if they have fewer than 10 bags, give them 5 extra). Update the original number using assignment operators.
// > +=, -=, \*=, /=, %=

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


//? 3. **Relational Operators**

// **Challenge:** A tea shop offers a loyalty program. Customers who buy more than 20 cups of tea get a special "Gold" badge, and those who buy 10 to 20 cups get a "Silver" badge. Write a program to display the badge they will receive based on the number of cups they buy.
// > > , >=, <, <=

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


//? 4. **Logical Operators**

// **Challenge:** Create a program that checks if a user is eligible for a tea subscription discount. The discount applies if the user is either a student or has purchased more than 15 cups. Ask the user to input their status (student or not) and their cup count.
// > > && and || operators

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


//? 5. **Bitwise Operators**

// ### Online resources
