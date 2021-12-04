#include <iostream>
using namespace std;
float  sani(float  a,float  b)
{
    float d=(a+b)/2;
    return d;

}

int main ()
{
    float  a,b;
    cin>>a>>b;
    float p=sani(a,b);
    cout<<p<<endl;
}