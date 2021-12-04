#include <iostream>
using namespace std;

bool isprime(int n)
{
    int d=2;
    for(d; d<n; d++)
    {
    if(n%d==0)
    {
        return false;
    }
   

    }
    return true; 

}

int main ()
{
    int n;
    cin>>n;
    for(int x=2; x<=n; x++)
    {
        if(isprime(x))
        {
        cout<<x<<endl;
        }

    }


}