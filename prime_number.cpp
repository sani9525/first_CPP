#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int num,count=0;
    cin>>num;
    for (int k=2; k<=num; k++)
    {
        if(num%k==0)
        {
            count++;
        }
        if(count==1)
        {
            cout<<"prime"<<endl;;
        }
        else 
        {
            cout<<"not prime"<<endl;
        }
    }
    return 0;
}