#include <iostream>
using namespace std;
int main()
{
    int n, j, i, bmax = 0, max = 0;
    int arr[1050] = {0};
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            bmax += arr[j];
            if (max < bmax)
                max = bmax;
        }
        bmax = 0;
    }
    if (max < 0)
        cout << 0;
    else
        cout << max;

    system("pause");
    return 0;
}