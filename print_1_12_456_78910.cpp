#include <iostream>
using namespace std;
int main ()
{
    int p=1;
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<p;
            p++;
        }
        cout<<endl;
    }
    return 0;
}