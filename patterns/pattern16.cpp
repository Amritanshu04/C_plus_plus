#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout << "enter the no. ";
    cin >> n;
    int row = 0 ;
    while(row < n)
    {
        int col=0;
        while(col < n - row )
        {
            cout << " * ";
            col = col +1;

        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}
