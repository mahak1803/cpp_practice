// File: char_triangle_repeat.cpp
// Description: Prints a triangle pattern where each row contains a repeated alphabet character.


#include<iostream>
using namespace std;

int main()
{
    int n;

    // Ask the user to enter the size of the pattern
    cout << "Enter the size of the pattern = ";
    cin >> n;

    // Start with character 'A'
    char ch = 'A';

    // Outer loop for rows
    for (int i = 0; i < n; i++)
    {
        // Inner loop to print characters in each row
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch; // Print the current character
        }

        // Move to the next line after each row
        cout << endl;

        // Move to the next alphabet character
        ch++;
    }

    return 0;
}
