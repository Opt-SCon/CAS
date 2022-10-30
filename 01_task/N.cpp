#include <iostream>
using namespace std;
int main()
{
    long long k, i, j, n, t, x;
    long long a[105] = {0}, temp, sum;
    cin >> t;
    for (x = 0; x < t; x++)
    {
        sum = 0;
        cin >> n >> k;
        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        if (n != k)
            for (i = 1; i <= k; i++)
            {
                for (j = i + k; j <= n; j += k)
                {
                    if (a[i] < a[j])
                    {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }
        for (i = 1; i <= k; i++)
        {
            sum += a[i];
        }
        cout << sum << endl;
    }

    system("pause");
    return 0;
}