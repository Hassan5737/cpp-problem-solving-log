/*
==================================================
Problem: Basics 03 - Strings, Numbers and Calculation

Platform: Codewars

Difficulty: 6 kyu

Topics:
- Strings
- Parsing and Cleaning Input
- Mathematical Operations
- Rounding and Conversion

Approach:
1. Traverse the input "dirty string".
2. Extract digits and '.' characters to form two valid numbers.
3. Detect the operator (+, -, *, /) between them.
4. Convert the extracted substrings into doubles.
5. Perform the corresponding arithmetic operation.
6. Round the result to the nearest integer.
7. Convert the final integer result back to a string.

Time Complexity:
O(n) — single pass through the string.

Space Complexity:
O(n) — storage for the two number substrings.

Date:
2026-06-15
==================================================
*/

#include <iostream>
#include <string>
#include <cmath>   
#include <cctype>  

using namespace std;

string calculateString(string calcIt) 
{
    string num1 = "";
    string num2 = "";
    char op = ' ';
    bool found_operator = false;
    
 
    for (char c : calcIt) 
    {
        if (isdigit(static_cast<unsigned char>(c)) || c == '.') 
        {
            if (!found_operator) {
                num1 += c; 
            } else {
                num2 += c; 
            }
        }

        else if (c == '+' || c == '-' || c == '*' || c == '/') 
        {
            op = c;
            found_operator = true; 
        }
    }
    

    double val1 = stod(num1);
    double val2 = stod(num2);
    double result = 0.0;
    
   
    switch (op) 
    {
        case '+': result = val1 + val2; break;
        case '-': result = val1 - val2; break;
        case '*': result = val1 * val2; break;
        case '/': result = val1 / val2; break;
    }
    
   
    long long rounded_result = round(result);
    
    return to_string(rounded_result);
}