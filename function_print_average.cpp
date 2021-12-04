#include <iostream>
using namespace std;
float average(float a ,float b)
{
    float avg=(a+b)/2;
    cout<<avg<<endl;

    return avg;

}
int main ()
{
    float a,b;
    cin>>a>>b;
    average(a,b);
    float c=4,d=7;
    float p=average(c,d);
    cout<<p<<endl;
}