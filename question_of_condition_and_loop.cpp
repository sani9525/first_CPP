#include<iostream>
using namespace std;


int main()
{
int n;
int a=1;
    int sum=0;
    cin>>n;
    while(a<=n)
    {
        if(a%2==0)
        { 
         sum=sum+a;
        }
        a++;
    }
     
    cout<<sum<<endl;
  
}