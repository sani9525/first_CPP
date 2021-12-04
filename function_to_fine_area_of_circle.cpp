#include <iostream>
using namespace std;
double findArea(double radius)
{
    
    double area=3.14*radius*radius;
    cout<<area<<endl;
    return area;

}
int main ()
{
    double radius=5;
   findArea(radius);
    
}

/*we can also use it function to find area of circle and 
we want to print multiple value of circle so just cout write inside int main () function. 
*/