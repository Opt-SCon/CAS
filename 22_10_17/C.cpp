#include <iostream>
#include <string>
using namespace std;
int main()
{
    double tall[2][55] = {0}, x, temp;
    string sex;
    int n, i, j, k, y, z, max;
    cin >> n;
    for (i = 0, j = 0, k = 0; i < n; i++)
    {
        cin >> sex >> x;
        if (sex == "male")
        {
            tall[0][j] = x;
            j++;
        }
        else
        {
            tall[1][k] = x;
            k++;
        }
    }
    for (i = 0; i < j; i++)
    {
        max = i;
        for (y = i; y < j; y++)
            if (tall[0][y] < tall[0][max])
                max = y;
        if (i != y)
        {
            temp = tall[0][i];
            tall[0][i] = tall[0][max];
            tall[0][max] = temp;
        }
    }
    for (i = 0; i < k; i++)
    {
        max = i;
        for (y = i; y < k; y++)
            if (tall[1][y] > tall[1][max])
                max = y;
        if (i != y)
        {
            temp = tall[1][i];
            tall[1][i] = tall[1][max];
            tall[1][max] = temp;
        }
    }
    for (i = 0; i < j; i++)
        printf("%.2lf ",tall[0][i]);
    for (i = 0; i < k-1; i++)
        printf("%.2lf ",tall[1][i]);
        printf("%.2lf",tall[1][i]);

    system("pause");
    return 0;
}