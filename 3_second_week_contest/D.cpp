#include <iostream>
using namespace std;
int main()
{
    int n, i, j, sum = 0, x = 1;
    long long arr[100010] = {0};
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            sum += -1 - arr[i];
            arr[i] = -1;
            x *= arr[i];
        }
        else if (arr[i] > 0)
        {
            sum += arr[i] - 1;
            arr[i] = 1;
        }
        else
        {
            if (x != 1)
            {
                sum++;
                arr[i] = -1;
                x *= -1;
            }
            else
            {
                sum++;
                arr[i]++;
            }
        }
    }
    if (x != 1)
    {
        sum+=2;
    }
    cout<<sum;
    system("pause");
    return 0;
}