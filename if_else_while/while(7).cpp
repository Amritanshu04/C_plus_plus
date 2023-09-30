/*to check prime or not*/

#include <iostream>
using namespace std;

main()
{
    int n ;
    cin>> n;

    int i = 2;
    while(i<n)
    {
        if(n%i==0)
        {
            cout<<"not prime for "<<i<<endl;
        }
        else
        {
            cout<<"prime for "<< i <<endl;
        }
        i = i + 1;
    }
}
