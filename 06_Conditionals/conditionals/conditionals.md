### 1. **If Statement**

### **Challenge:** Write a program that checks if the user wants to order Green Tea. If the user types "Green Tea," the program should confirm their order.

```cpp
#include <iostream>
#include <string>
using namespace std;

int main(){
    string teaOrder;
    cout << "Enter your tea Order";
    getline(cin, teaOrder);

    if(teaOrder == "Green Tea"){
        cout << "You have ordered Green Tea" << endl;
    }

    return 0;
}
```

### 2. **If-Else Statement**

### **Challenge:** Write a program that checks if a tea shop is open. If the current hour (input by the user) is between 8 AM and 6 PM, the shop is open; otherwise, it’s closed.

```cpp
#include <iostream>
using namespace std;

int main(){
    int hours;
    cout << "Enter the current hour (0-23): ";
    cin >> hours;

    if(hours >= 8 && hours <= 18){
        cout << "Tea Shop is Open!" << endl;
    }else{
        cout << "Tea Shop is Closed!" << endl;
    }

    return 0;
}
```

### 3. **Nested If-Else**

### **Challenge:** A tea shop offers discounts based on the number of tea cups ordered. Write a program that checks the number of cups ordered and applies a discount:\* More than 20 cups: 20% discount

- Between 10 and 20 cups: 10% discount
- Less than 10 cups: No discount

### 4. **Switch Case**

### **Challenge:** Write a program that lets the user select a tea type from a menu. Use a switch statement to display the price based on the selected tea:\* Green Tea: $2

- Black Tea: $3
- Oolong Tea: $4

```cpp
#include <iostream>
using namespace std;

int main(){
    int choice;
    double price;

    cout << "Select Your Tea\n";
    cout << "1. Green Tea\n";
    cout << "2. Lemon Tea\n";
    cout << "3. Oolong Tea\n";
    cout << "Enter your choice in number: \n";

    cin >> choice;

    switch(choice){
        case 1:
            price = 2.0;
            cout << "You have selected Green Tea. Price: " << price << endl;
            break;
        case 2:
            price = 3.0;
            cout << "You have selected Lemon Tea. Price: " << price << endl;
            break;
        case 3:
            price = 4.0;
            cout << "You have selected Oolong Tea. Price: " << price << endl;
            break;
        default:
            cout << "Invalid Choice!" << endl;
            break;
    }

     return 0;
}
```
