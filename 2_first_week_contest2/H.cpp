#include<stdio.h>
int main()
{
    int n,i,j;
    double x,e=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=1;
        for(j=1;j<=i;j++)
        {
            x*=j;
        }
        e+=1/x;
    }
    printf("%.10lf",e);
    return 0;
}