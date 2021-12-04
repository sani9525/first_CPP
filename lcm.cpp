#include <iostream>
using namespace std;
int main ()
{
    int a=3,b=5,k;
    cin>>a>>b;
    for(k=a; k<=a*b; k++)
    {
        if(k%a==0&&k%b==0)
        {
            cout<<k<<endl;
        }
        cout<<endl;
    }


}