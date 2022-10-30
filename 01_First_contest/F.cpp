#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[2][210] = {0}, i, j, k, a, b;
    for (i = 0; i < 2; i++)
        cin >> str[i];
    a = strlen(str[0]);
    b = strlen(str[1]);
    if (a > b)
    {
        for (i = strlen(str[0]) - 1, j = strlen(str[1]) - 1; j >= 0; i--, j--)
        {
            str[0][i] += str[1][j] - 48;
        }
        for(i=0;str[0][i]=='0';i++);
        cout << str[0]+i;
    }
    else
    {
        for (i = strlen(str[1]) - 1, j = strlen(str[0]) - 1; j >= 0; i--, j--)
        {
            str[1][i] += str[0][j] - 48;
        }
        for(i=0;str[0][i]=='0';i++);
        cout << str[1]+i;
    }

    system("pause");
    return 0;
}