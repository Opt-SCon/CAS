#include <iostream>
using namespace std;
int main()
{
    int n, i, j, k;
    char str[110] = "";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> str;
        for(j=0;str[j]!=0;j++)
        {
            if(str[j]=='_')
            {
                j++;
                putchar(str[j]-32);
            }
            else if(str[j]>='A'&&str[j]<='Z')
            {
                putchar('_');
                putchar(str[j]+32);
            }
            else cout<<str[j];
        }
        putchar('\n');
    }
    
    system("pause");
    return 0;
}