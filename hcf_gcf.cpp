#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,k;
    a=21;
    b=24;
    for(k=21; k>1; k-- )
    {
        if (a%k==0 && b%k==0)
        {
            cout<<k<<endl;
        }
    }
    return 0;
}