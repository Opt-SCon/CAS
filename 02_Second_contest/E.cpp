#include<stdio.h>
#include<string.h>
struct a
{
    char name[30];
    int n;
} X[25];
struct a x;
int main()
{
    int n,n1, i, j,max;
    scanf("%d",&n);
    n1=n;
    for (i = 0; i < n; i++)
    {
        scanf("%s%d",X[i].name,&X[i].n);
    }
    for (i = 0; i < n; i++)
    {
        max=i;
        for (j = i; j < n ; j++)
        {
            if (X[j].n > X[max].n)
            {
                max=j;
            }
            else if (X[j].n == X[max].n)
            {
                if (strcmp(X[j].name,X[max].name)<0)
                {
                    max=j;
                }
            }
            
        }
        if(max!=i)
        {
            x=X[i];
            X[i]=X[max];
            X[max]=x;
        }
    }
    for(i=0;i<n1;i++)
    {
        printf("%s %d\n",X[i].name,X[i].n);
    }
    return 0;
}