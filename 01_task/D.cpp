#include <iostream>
using namespace std;

int main()
{
    int t, i, j;
    char str[110] = "", que, chi;
    cin >> t;
    for (j = 0; j < t; j++)
    {
        cin >> str;
        que = 0;
        chi = 0;
        for (i = 0; str[i] != 0; i++)
        {
            if (str[i] == 'L')
                chi++;
            else
            {
                chi = 0;
                if (str[i] == 'A')
                {
                    que++;
                    if (que > 1)
                    {
                        cout << "NO" << endl;
                        break;
                    }
                }
            }
            if (chi >= 3)
            {
                cout << "NO" << endl;
                break;
            }
        }
        if (que <= 1 && chi < 3)
            cout << "YES" << endl;
    }
    system("pause");
    return 0;
}