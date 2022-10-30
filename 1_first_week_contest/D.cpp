#include<iostream>
using namespace std;
int main()
{
    int  a[105][105]={0};
    int i,j,k,row,col;
    cin>>row>>col;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        cin>>a[i][j];
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<=i;j++)
        {
            for(k=i;k>=0;k--) cout <<a[j][k]<<endl;
        }
    }
    

    system("pause");
    return 0;
}