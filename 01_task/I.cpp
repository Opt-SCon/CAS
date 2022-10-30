#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, i, j, k,x=1;
    cin >> n;
    for (i = 0; i < 2 * n + 1; i++)
    {
        for (j = 0; j < abs(2 * n - i * 2); j++)
            cout << ' ';
        if (i <= n)
        {
            for (k = 0; k <= i; k++)
            {
                cout << k;
                if (k != i)
                    cout << ' ';
            }
            for (k = i - 1; k >= 0; k--)
            {
                cout << ' ' << k;
            }
        }
        else
        {
            for (k = 0; k <= i - x * 2; k++)
            {
                cout << k;
                if (k != i - x * 2)
                    cout << ' ';
            }
            for (k = k - 2; k >= 0; k--)
            {
                cout << ' ' << k;
            }
            x++;
        }

        cout << endl;
    }
    system("pause");
    return 0;
}