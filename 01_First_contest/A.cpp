#include<iostream>
using namespace std;
int main()
{
    long long n,m,i,j,temp=1,m1,sum=0;
    cin>>n>>m;
    m1=m;
    while(m1>0)
    {
        if(m1-temp<0) 
        {
            sum=m1;
            break;
        }
        else if(m1-temp==0) 
        {
            sum=0;
            break;
        }
        else m1-=temp;
        if(temp==n) temp=1;
        else temp++;
    }
    cout<<sum;

    system("pause");
    return 0;
}