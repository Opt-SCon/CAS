#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    long long n,i,j;
    char a[105]="";
    cin>>n;
    n=n%26;
    cin>>a;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]+n>'z') a[i]=a[i]+n-'z'+'a'-1;
        else a[i]+=n;
    }
    cout<<a;
    
    system("pause");
    return 0;
}