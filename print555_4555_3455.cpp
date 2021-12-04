#include <iostream>
using namespace std;
int main ()
{
    for(int i=5; i>=1; i--)
    { 
        int k=i;
        for(int j=1; j<=5; j++)
        {

            if(k<=i)
            {
                cout<<k;
            }
            else 
            {
                cout<<5;
            }
        k++;
        cout<<j;
        }
    cout<<endl;
    }
    return 0;
}
