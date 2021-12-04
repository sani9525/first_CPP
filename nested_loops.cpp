#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;

    int i=1;
    int var1=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<var1;
            j++;
            var1++;
        }
        cout<<endl;
        i=i++;
    }
    return 0;    

}