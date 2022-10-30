#include <iostream>
using namespace std;
int main()
{
    int r, c, i, j, sum = 0;
    int flag[105][105] = {0};
    char grass[105][105] = {""};
    cin >> r >> c;
    for (i = 0; i < r; i++)
    {
        cin >> grass[i];
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (grass[i][j] == '#')
            {
                if (j + 1 < c)
                {
                    if (flag[i][j] == 0 && flag[i][j + 1] == 0)
                    {
                        flag[i][j] = 1;
                        sum++;
                    }
                    else if (flag[i][j] == 0)
                        flag[i][j] = 1;
                }
                else if (flag[i][j] == 0)
                {
                    flag[i][j] = 1;
                    sum++;
                }

                if (j + 1 < c && grass[i][j + 1] == '#' && flag[i][j + 1] == 0)
                {
                    flag[i][j + 1] = 1;
                }
                if (i + 1 < r && grass[i + 1][j] == '#' && flag[i + 1][j] == 0)
                {
                    flag[i + 1][j] = 1;
                }
            }
        }
    }
    cout << sum;
    return 0;
}