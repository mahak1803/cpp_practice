// File: alphabet_square_continuous.cpp
// Description: Print a square pattern with continuously increasing alphabets

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the pattern = ";
    cin >> n;

    char ch = 'A';

    // Outer loop for rows
    for (int i = 0; i < n; i++)
    {
        // Inner loop for columns
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch++; // Move to next alphabet
        }
        cout << endl;
    }

    return 0;
}
