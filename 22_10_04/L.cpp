#include<iostream>
using namespace std;
int main()
{
    int n,i,j,a[101][101]={0},sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++) cin>>a[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++) 
        {
            if(i==j) sum+=a[i][j];
            else if(i+j==n-1) sum+=a[i][j];
            else if(i==n/2) sum+=a[i][j];
            else if(j==n/2) sum+=a[i][j];
        }
    }
    cout <<sum;

    system("pause");
    return 0;
}