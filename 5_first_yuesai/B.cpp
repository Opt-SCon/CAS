#include <iostream>
#include <algorithm>
using namespace std;
long long arr[1005] = {};
bool cmp(long long a, long long b)
{
    return a > b;
}
int main()
{
    long long n, m, c, x, y, sum = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        arr[i] = x - y;
    }
    sort(arr, arr + n, cmp);
    for (int i = 0; i < m; i++)
    {
        sum += arr[i];
    }
    cout << sum;
    system("pause");
    return 0;
}