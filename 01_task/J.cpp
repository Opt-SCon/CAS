#include <iostream>
using namespace std;

struct a
{
    int x, y;
};
int main()
{
    struct a x[20];
    int n, m, i, j, sumx = 0, sumy = 0, hong = 0, _sumx = 0, _sumy = 0;
    cin >> n >> m;
    for (i = 0; i < n + m; i++)
        cin >> x[i].x >> x[i].y;

    for (i = -3; i <= 3; i++)
    {
        sumx = 0;
        sumy = 0;
        _sumx = 0;
        _sumy = 0;
        if (i != 0)
        {
            for (j = 0; j < n; j++)
            {
                if (x[j].x == i)
                    sumx++;
                if (sumx >= 3)
                {
                    hong++;
                    sumx = 0;
                }
                if (x[j].y == i)
                    sumy++;
                if (sumy >= 3)
                {
                    hong++;
                    sumy = 0;
                }
            }
        }
        else
        {
            for (j = 0; j < n; j++)
            {
                if (x[j].x == i)

                    if (x[j].y > 0)
                        sumx++;
                    else
                        _sumx++;

                if (sumx >= 3)
                {
                    hong++;
                    sumx = 0;
                }
                if (_sumx >= 3)
                {
                    hong++;
                    _sumx = 0;
                }
                if (x[j].y == i)

                    if (x[j].x > 0)
                        sumy++;
                    else
                        _sumy++;
                if (sumy >= 3)
                {
                    hong++;
                    sumy = 0;
                }
                if (_sumy >= 3)
                {
                    hong++;
                    _sumy = 0;
                }
            }
        }
    }
    cout << hong;
    system("pause");
    return 0;
}