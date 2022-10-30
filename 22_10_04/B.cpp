#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,i,i1,j,k,s=0,arr[4];
    cin>>n;
    for(i=11;i<=n;i++)
    {
        i1=i;
        for(j=2;j<=sqrt((double(i)));j++)
        if(i%j==0) break;
        if(j<=sqrt((double)i)) continue;
        else{
            for(k=0;i1!=0;k++)
            {
                arr[k]=i1%10;
                i1/=10;
            }
            k--;
            for(j=0;j<k;j++,k--)
            {
                if(arr[j]!=arr[k])
                break;
            }
            if(!(j<k)) s++;
        }
    }
    cout<<s;
    system("pause");
    return 0;
}