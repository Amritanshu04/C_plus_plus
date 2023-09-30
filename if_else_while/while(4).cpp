/*to print the no. till 1 to N*/

#include <iostream>
using namespace std;

main()
{
    int n;
    cout<<"enter the no. to print the number till that"<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        cout<<i<<" ";
        i = i+1;
    }
}