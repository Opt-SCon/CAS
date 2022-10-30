#include <iostream>
using namespace std;
int main()
{
    int y, m, d;
    cin >> y >> m >> d;
    if (d - 1 >= 1)
        cout << y << ' ' << m << ' ' << d-1;
    else
    {
        if (m - 1 == 2)
        {
            if (y % 4 == 0 || (y % 400 == 0 && y % 100 != 0))
                d = 29;
            else
                d = 28;
            m-=1;
            cout << y << ' ' << m << ' ' << d;
        }
        else if(m-1<1)
        {
            cout << y-1 << ' ' << 12 << ' ' << 31;
        }
        else 
        {
            switch (m-1)
            {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:d=31;break;
            case 4:
            case 6:
            case 9:
            case 11:d=30;break;
            }
            cout << y << ' ' << m-1 << ' ' << d;
        }
    }
    system("pause");
    return 0;
}