# Challenges 🚀❤️‍🔥

## Challenge 1:

---

Tea Information Display Write a Program that declares variables to store the type of tea, its price per kilogram (float), and its rating (char). Use data types effectively and print them in a formatted output escape sequences.

> Hint: Use \n for new lines and \" to quote the tea name.

## Challenge 2:

---

Modify Tea Prices create a program where the user inputs a base price of tea. Use type casting to increase the price by 10% and display the rounded new price using explicit casting.

> Hint: Use both float and int types, and demonstrate type casting.

## Challenge 3:

---

Favorite Tea Input write a program that takes the user's favorite tea as input using getline and also asks how many cups of tea they want using cin. Display the result in a fun language.

> Hint: Combine cin and getline carefully to avoid input issues.

### **Important Summary from the C++ Problems**

These three challenges focus on **basic data types, input handling, type casting, and formatted output** in C++. Here are the key takeaways from each:

---

### ✅ **Challenge 1: Tea Information Display**

#### **Concepts Covered**

- **String Handling**: Using `string` to store tea names.
- **Float Data Type**: Used for the price per kilogram.
- **Char Data Type**: Used for storing ratings.
- **Escape Sequences**: `\n` for new lines and `\"` for quotes.

#### **Key Learning**

- Properly format output using escape sequences for better readability.
- Use different data types effectively for different values.

---

### ✅ **Challenge 2: Modify Tea Prices**

#### **Concepts Covered**

- **User Input (`cin`)**: Taking base price as `float`.
- **Type Casting**:
  - Multiplication with `1.10` increases price by 10%.
  - Explicit type casting (`static_cast<int>`) is used to round the price.

#### **Key Learning**

- Understand explicit type conversion (`float` → `int`).
- Know how to round numbers using type casting instead of built-in rounding functions.

---

### ✅ **Challenge 3: Favorite Tea Input**

#### **Concepts Covered**

- **Combining `getline(cin, variable)` and `cin >> variable`**:
  - `getline()` for multi-word input.
  - `cin >> variable` for numerical input.
- **Handling Input Issues**:
  - If `cin` is used before `getline()`, a newline character remains in the buffer.
  - **Fix**: Use `cin.ignore();` before `getline()` if necessary.
- **Fun Output Formatting**: Displaying user input interactively.

#### **Key Learning**

- Use `getline(cin, variable)` for multi-word input.
- Be cautious when mixing `cin >>` and `getline()` due to buffer issues.
- Use `cin.ignore();` before `getline()` if input skipping occurs.

---

### **Overall Takeaways**

1. **Use Proper Data Types**: `string` for text, `float` for decimal values, and `char` for single characters.
2. **Escape Sequences Enhance Output**: `\n` for new lines, `\"` for quotes.
3. **Handle User Input Carefully**: `getline()` should be used properly to avoid input skipping issues.
4. **Apply Type Casting Where Needed**: `static_cast<int>(value)` is useful for converting `float` to `int` while removing decimal values.
5. **Ensure Clear and Fun Output**: Interactive and formatted output improves user experience.
