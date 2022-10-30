#include <iostream>
using namespace std;
int main()
{
    int a1 = 1, a2 = 1, a3 = 2, n, i, j;
    cin >> n;
    if (n == 1 || n == 2)
        cout << 1;
    else
    {
        for (i = 4; i <= n; i++)
        {
            a1 = a2;
            a2 = a3;
            a3 = a1 + a2;
        }
        cout << a3;
    }
    return 0;
}