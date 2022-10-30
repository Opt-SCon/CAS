#include<iostream>
using namespace std;
int main()
{
    int n,i,j,c=1;
    long long x,y;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        if(x<y)
        {
            x+=y;
            y=x-y;
            x=x-y;
        }
        while(x%y)
        {
            c=y;
            y=x%y;
            x=c;
        }
        cout<<y<<endl;
    }
    system("pause");
    return 0;
}