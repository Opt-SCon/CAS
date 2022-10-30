#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,i,j;
    double a,b,c;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a;
        printf("%.2lf\n",(a/2)*(a/2)*sqrt(3)/4);
    }
    system("pause");
    return 0;
}