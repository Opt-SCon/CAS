#include <iostream>
#include <string>
using namespace std;
typedef struct s
{
    string name;
    int source{};
    int sum{};
} X;

int main()
{
    X a[1000];
    X Max[1000];
    int n, i, j, k, max = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].source;
        for (j = 0; j <= i; j++)
        {
            if (a[j].name == a[i].name)
            {
                a[j].sum += a[i].source;
                break;
            }
        }
        for (j = i - 1; j >= 0; j--)
        {
            if (a[j].name == a[i].name)
            {
                a[i].source += a[j].source;
                break;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[max].sum < a[i].sum)
            max = i;
    }

    for (i = 0, j = 0; i < n; i++)
    {
        if (a[i].sum == a[max].sum)
        {
            Max[j] = a[i];
            j++;
        }
        else
        {
            for (k = 0; k < j; k++)
            {
                if (Max[k].name == a[i].name)
                {
                    Max[j] = a[i];
                    j++;
                    break;
                }
            }
        }
    }
    for (i = 0; i < j; i++)
    {
        if (Max[i].source >= a[max].sum)
        {
            cout << Max[i].name;
            break;
        }
    }
    system("pause");
    return 0;
}
