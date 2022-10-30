#include<iostream>
using namespace std;
int main()
{
    int i,flag=0;
    char s[220]="";
    cin>>s;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            if(flag==1) putchar(' ');
            flag=0;
            i+=2;
        }
        else
        {
            putchar(s[i]);
            flag=1;
        }
    }
    system("pause");
    return 0;
}