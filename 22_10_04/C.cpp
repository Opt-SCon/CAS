#include<iostream>
using namespace std;
int i, j, sum = 0, n, m, qip[1000][1000] = { 0 };
int main()
{
    cin >> n >> m;
    if (n > m) { n += m; m = n - m; n = n - m; }
    if (n == 1)
    {
        sum = m;
    }
    else if (n == 2 )
    {
        if (m % 4 == 0) sum = m;
        else if (m % 4 == 1) sum = m + 1;
        else sum = m / 4 * 4 + 4;
    }
    else
    {
        sum = n / 2 * m + n % 2 * (m + 1) / 2;
    }
    cout << sum;
    system("pause");
    return 0;
}