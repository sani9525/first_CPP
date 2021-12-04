#include <iostream>
using namespace std;
bool prime(int n)
{

    for (int i = 1; i <= n; i++)
    {
        if (n % 2 == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    bool ans = prime(31);
    cout << ans << endl;
    bool ans = prime(85);
    cout << ans << endl;

    return 0;
}