#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    int n,i,x;
    cin>>a>>b>>n;
    
    for(i=0;i<n;i++)
    {        
        a*=10;
        x=a/b;
        a-=x*b;
    }
    cout<<x;

    system("pause");
    return 0;
}