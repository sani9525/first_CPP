#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
bool divided=false;
    for(int i=2; i<=n; i++)
    {
        if(n%2==0)
        {
        divided =true;
        break;
        }
    }
    if(divided)
    {
        cout<<"not prime"<<endl;
    }
    else{
        cout<<"prime"<<endl;
    }
    return 0;
}