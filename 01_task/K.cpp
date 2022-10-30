#include <iostream>
using namespace std;
int main()
{
    int i, j, t, n, m, k, flag = 0;
    int a[8][8] = {0};
    cin >> t;
    for (i = 0; i < t; i++)
    {
        flag = 0;
        cin >> n >> m;
        if (n == 1 || m == 1)
        {
            cout << n << ' ' << m << endl;
            flag = 1;
        }
        else if (n == 2 && m == 2)
        {
            cout << n << ' ' << m << endl;
            flag = 1;
        }
        else
            for (j = 0; j < n; j++)
            {

                for (k = 0; k < m; k++)
                {
                    if (j - 2 < 0 && j + 2 >= n && k - 2 < 0 && k + 2 >= m)
                    {
                        flag = 1;
                        cout << j + 1 << ' ' << k + 1 << endl;
                        break;
                    }

                    else
                    {
                        if (j - 2 >= 0)
                            if (k + 1 < m || k - 1 >= 0)
                                continue;
                        if (j - 1 >= 0)
                            if (k + 2 < m || k - 2 >= 0)
                                continue;
                        if (j + 2 < n)
                            if (k + 1 < m || k - 1 >= 0)
                                continue;
                        if (j + 1 < n)
                            if (k + 2 < m || k - 2 >= 0)
                                continue;
                        cout << j + 1 << ' ' << k + 1 << endl;
                        flag = 1;
                        break;
                    }
                }
                if (flag)
                    break;
            }
        if (flag == 0)
            cout << n << ' ' << m << endl;
    }

    system("pause");
    return 0;
}