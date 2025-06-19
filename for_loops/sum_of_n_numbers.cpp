// ============================================================================
// File: sum_of_n_numbers.cpp
// Description: Program to print the sum of first 'n' numbers using a for loop.
// Author: Mahak Saini
// ============================================================================

#include<iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout<<"Enter the number = ";
    // Take input from the user
    cin >> n;

    // Loop to calculate the sum of first 'n' numbers
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Print the result
    cout << "The sum of "<<n<<"numbers is = "<< sum << endl;

    return 0;
}
