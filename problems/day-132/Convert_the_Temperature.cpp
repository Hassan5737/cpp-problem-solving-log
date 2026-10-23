
/*
==================================================
Problem: Convert the Temperature

Platform: LeetCode
Problem Number: 2469

Difficulty: Easy

Topics:
- Math

Approach:
- Convert Celsius to Kelvin by adding 273.15.
- Convert Celsius to Fahrenheit using the conversion formula.
- Store both results in a vector in the required order.
- Return the vector.

Time Complexity:
O(1)

Space Complexity:
O(1)

Date:
2026-10-23
==================================================
*/

#include<vector>
using namespace std;

class Solution
{
public:
    vector<double> convertTemperature(double celsius)
    {
        double kelvin = celsius + 273.15;
        double fahrenheit = celsius * 9.0 / 5.0 + 32.0;

        return {kelvin, fahrenheit};
    }
};
