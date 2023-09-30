#include<iostream>
using namespace std;


main()
{
    int a ;
    cout << "enter the value of a "<<endl;

    cin>>a;
    if (a>0)
    {
        cout<<"A is positive"<<endl;
    }
    else
    {
        if(a<0)
        {
            cout<<"A is negative "<<endl;
        }
        else
        {
            cout<<"A is 0"<<endl;
        }
    }

}
