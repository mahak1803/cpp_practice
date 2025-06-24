// File: triangle_pattern.cpp
// Description: Print a left-aligned right-angled triangle of stars

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the pattern = ";
    cin >> n;

    // Outer loop for rows
    for (int i = 0; i < n; i++)
    {
        // Inner loop for stars in each row
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl; // Move to next line after each row
    }

    return 0;
}
