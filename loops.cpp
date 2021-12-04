#include <iostream>
using namespace std;
int main ()
{
    int a;
    cout<<"Enter the no. of A : ";
    cin>>a;
    int sum=0;
    for(int i=10; i>a; a++)
    {
        cout<<a<<endl;
 // sum=sum+a;
sum=a*(a-1)/(2);
    }
cout<<sum<<endl;

 // cout<<sum<<endl;
    return 0;
}

