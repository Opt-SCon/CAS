#include <iostream>
using namespace std;
int n;
int vis[20]={0};
void ao_li_gei(int arr[],int i){
    int j = 0;
    if(i==n){
        for(j=0;j<n;j++)
            printf("%5d",arr[j]);
        cout<<'\n';
    }
    else
    {
        for(j=1;j<=n;j++) {
            if(!vis[j])
            {
                vis[j]=1;
                arr[i]=j;
                ao_li_gei(arr, i + 1);
                vis[j]=0;
            }


        }
    }
}
int main()
{
    int arr[15]={0};
    cin>>n;

    ao_li_gei(arr,0);
    system("pause");
    return 0;
}
