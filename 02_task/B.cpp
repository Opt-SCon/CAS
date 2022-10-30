#include <iostream>
#include <algorithm>
using namespace std;
int a[500100] = {0};
bool b[500100] = {false};
int main()
{
    int n, i, j, sum = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    j = 0;
    for (i = n / 2; i < n; i++)
    {
        if (a[i] / a[j] >= 2)
        {
            b[j] = true;
            j++;
        }
        sum++;
    }
    for (i = 0; i < n / 2; i++)
    {
        if (b[i] == false)
            sum++;
    }
    cout << sum;

    system("pause");
    return 0;
}