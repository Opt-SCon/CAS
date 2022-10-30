#include <iostream>
using namespace std;
int main()
{
    int k, ai[12], i, j, max = 0, sum = 0, maxp;
    cin >> k;
    for (i = 0; i < 12; i++)
    {
        cin >> ai[i];
    }
    if (k == 0)
    {
        cout << 0;
        system("pause");
        return 0;
    }
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            if (max < ai[j])
            {
                max = ai[j];
                maxp = j;
            }
        }
        ai[maxp] = 0;
        k -= max;
        max = 0;
        sum++;
        if (k <= 0)
            break;
    }
    if (k > 0)
        cout << -1;
    else
        cout << sum;
    system("pause");
    return 0;
}