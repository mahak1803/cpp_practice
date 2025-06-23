// File: alphabet_square_pattern.cpp
// Description: Print an alphabet square pattern of given size.

#include<iostream>
using namespace std;

int main()
{
    int size;
    
    // Input the pattern size
    cout << "Enter the pattern size = ";
    cin >> size;

    // Outer loop for rows
    for (int i = 0; i < size; i++)
    {
        char ch = 'A'; // Start with 'A' on each row

        // Inner loop for columns
        for (int j = 0; j < size; j++)
        {
            cout << ch << " ";
            ch++; // Move to next alphabet
        }

        cout << endl; // Move to the next row
    }

    return 0;
}
