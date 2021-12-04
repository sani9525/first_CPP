#include <iostream>
using namespace std;
int main ()
{
    char a;
    cout<<a;
    cin>>a;

    if(97<=a&&a<=122)
    {
        cout<<1<<endl;
    }
    else if(65<=a&&a<=90)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    return 0;
}