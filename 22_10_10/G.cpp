#include <iostream>
using namespace std;
int main()
{
    int t, n, i, j, k;
    int s[15] = {0};
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> n;
        for (j = 1; j <= n; j++)
        {
            k = j;
            while (k)
            {
                s[k % 10]++;
                k /= 10;
            }
        }
        for (j = 0; j < 10; j++)
        {
            cout << s[j];
            if (j != 9)
                putchar(' ');
        }
        putchar('\n');
        for (j = 0; j < 10; j++)
        {
            s[j] = 0;
        }
    }

    system("pause");
    return 0;
}