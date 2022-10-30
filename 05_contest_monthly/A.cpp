#include <iostream>
using namespace std;

long long func(long long a, long long b)
{
    if (b == 0)
        return a;
    else
        return func(b, a % b);
}
int main()
{
    long long a, b, t;
    cin >> t;
    while (t--) 
    {
        cout << func(a, b);
    }
    system("pause");
    return 0;
}