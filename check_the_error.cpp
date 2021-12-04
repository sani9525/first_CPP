#include <iostream>
using namespace std;
void func(int a)
{
    int b=a;
    b=b+10;
    cout<<b<<endl;

}
int main ()
{
    int a=10;
    func(a);
    
}