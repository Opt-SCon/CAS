#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,j,k;
    char a;
    cin>>a;
    for(i=0;i<2*5;i++)
    {
        for(j=0;j<abs(i-2);j++) cout<<' ';
        if(i<3)
        {for(j=0;j<2*i+1;j++) cout<<a;
        for(j=j-1;j>=0;j--) cout<<a;
        }
        else 
        {
            for()
        }
        cout<<endl;
    }
    system("pause");
    return 0;
}