#include <iostream>
using namespace std;
int main()
{
    int s[100000] = {0};
    int n, a, b, i, j, x;
    cin>>n;
    for (i = 0; i < n-1; i++)
        scanf("%d,",&s[i]);
    scanf("%d",&s[i]);
    a = 0;
    b = n - 1;
    while (a < b)
    {
        while (a < b && s[a] % 2)
            a++;
        while (a < b && s[b] % 2 == 0)
            b--;
        if (a < b)
        {
            x = s[a];
            s[a] = s[b];
            s[b] = x;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<s[i];
        if(i!=n-1) putchar(',');
    }

    system("pause");
    return 0;
}