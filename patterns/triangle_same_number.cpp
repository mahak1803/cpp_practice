// File: triangle_same_number.cpp
// Description: Print a number triangle where each row contains the same number

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the pattern = ";
    cin >> n;

    // Loop through rows
    for (int i = 0; i < n; i++)
    {
        // Loop through columns
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }

    return 0;
}
