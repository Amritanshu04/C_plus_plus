/*
A B C
D E F
G H I
*/

#include <iostream>
using namespace std;

int main()
{
    int n = 3; // Number of rows in the pattern
    char currentChar = 'A';

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            cout << currentChar << " ";
            currentChar++;
        }
        cout << endl;
    }

    return 0;
}
