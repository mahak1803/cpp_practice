// File: continuous_number_square.cpp
// Description: Print a square pattern with continuously increasing numbers

#include<iostream>
using namespace std;

int main()
{
    int n, num = 1;

    // Input the size of the pattern
    cout << "Enter the size of the pattern = ";
    cin >> n;

    // Outer loop for rows
    for (int i = 0; i < n; i++)
    {
        // Inner loop for columns
        for (int j = 0; j < n; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl; // Move to next row
    }

    return 0;
}
