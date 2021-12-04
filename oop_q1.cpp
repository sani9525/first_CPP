#include <iostream>
using namespace std;
class B {
    public :
    virtual void s(){
        cout<<"in Base "<<endl;
    }
};
class D : public B
{
public :
void s()
{
cout<<"in derived"<<endl;
}

};

int main (void)
{
    D d;
    B*b=&d;
    b->s();
    return 0;
}