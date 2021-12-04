#include <iostream>
using namespace std;
int main ()
{
    int i=1;
    while(i<10)
    {
     if(i==7)
     {
         i++;
         continue;
         
     }
        cout<<i<<endl;
        i++;
    }

    for(int j=1; j<10; j++)
    {
        if(j==5)
        {
            continue;
        }
        
        cout<<j<<endl;
    }
    return 0;
}