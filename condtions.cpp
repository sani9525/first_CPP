#include <iostream>
using namespace std;
int main ()
{
    int a,b;
    cout<<"Enter the no. of a and b : ";
    cin>>a>>b;
    if(a==b)
    {
        cout<<" a and b are equal "<<endl;
    }
    else if(a>b)
    {
cout<<"a is greather than b"<<endl;
    }
    else 
    {
        cout<<"b is less than of a "<<endl;
    }
    return 0;
}