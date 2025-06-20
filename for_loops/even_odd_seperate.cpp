// File: even_odd_separate.cpp
// Description: Program to print even and odd numbers separately up to a given number.

#include<iostream>
using namespace std;

int main()
{
    int n;

    // Input the number from user
    cout << "Enter number = ";
    cin >> n;

    // Print even numbers from 0 to n
    cout << "Even Numbers = ";
    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    // Print odd numbers from 0 to n
    cout << "\nOdd Numbers = ";
    for (int i = 0; i <= n; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }

    return 0;
}
