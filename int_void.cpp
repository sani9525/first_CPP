#include <iostream>
using namespace std;

int func(int a)
{
    a+=10;
    
    cout<<a<<endl;
    return 0;
    
}
int main ()
{
    int a=5;
    func(a);

}
