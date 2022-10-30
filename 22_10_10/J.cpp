#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a,b;
    int n,i,j;
    cin>>n;
    cin>>a;
    b=a;
    for(i=1;i<n;i++)
    {
        cin>>a;
        for(j=0;j<a.length();j++)
        {
            if(a[j]!=b[j]) {
                if (b[j] != '?') {
                    if (a[j] != '?')b[j] = '!';
                } else if (a[j] != '?') b[j] = a[j];
            }
        }
    }
    for(i=0;i<b.length();i++)
    {
        if(b[i]=='?') b[i]='a';
        else if(b[i]=='!') b[i]='?';
    }
    cout<<b;
    system("pause");
    return 0;
}