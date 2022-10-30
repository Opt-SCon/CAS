#include <stdio.h>
#include <string.h>
int main()
{
    int i, j = 0, a = 0, b = 0;
    char x[105] = "", y[105] = "";
    gets(x);
    gets(y);
    for (i = 0; i < strlen(x); i++)
    {
        if (x[i] == ' ')
            continue;
        else
            a++;
        for (; j < strlen(y); j++)
        {
            if (x[i] + 32 == y[j] || x[i] - 32 == y[j] || x[i] == y[j])
            {
                j++;
                b++;
                break;
            }
            else if (y[j] == ' ')
                continue;
            else
            {
                printf("NO");
                return 0;
            }
        }
    }
    if (a == b)
        printf("YES");
    else
        printf("NO");
    return 0;
}