// File: number_triangle.cpp
// Description: Prints a triangle pattern where each row contains increasing numbers starting from 1.


#include<iostream>
using namespace std;

int main()
{
    int n;

    // Prompt the user to enter the size of the pattern
    cout << "Enter the size of the pattern = ";
    cin >> n;

    // Outer loop for rows
    for (int i = 0; i < n; i++)
    {
        // Inner loop prints numbers from 1 to i+1
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
