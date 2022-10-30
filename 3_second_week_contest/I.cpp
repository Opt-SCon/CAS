#include <iostream>
using namespace std;
long long arr[500050] = {0}, flag[500050] = {0};
int main()
{
    long long nm[2][50005]={0};
    int n, q, x, i, j=0, max, min;
    cin >> n >> q;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < q; i++)
    {
        cin >> flag[i];
    }
    max=min=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
        nm[0][i]=max;
        if(arr[i]<min) min=arr[i];
        nm[1][i]=min;
    }
    for(i=0;i<q-1;i++){
        cout<<nm[0][flag[i]-1]-nm[1][flag[i]-1]<<" ";
    }
    cout<<nm[0][flag[i]-1]-nm[1][flag[i]-1];
    system("pause");
    return 0;
}