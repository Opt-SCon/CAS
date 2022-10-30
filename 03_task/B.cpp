#include<iostream>
using namespace std;
int main(){
    int arr[5]={0},n,a,b,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a<=18) arr[0]++;
        else if(a<=35) arr[1]++;
        else if(a<=60) arr[2]++;
        else arr[3]++;
    }
    printf("%.2lf%%\n",arr[0]*100.0/n);
    printf("%.2lf%%\n",arr[1]*100.0/n);
    printf("%.2lf%%\n",arr[2]*100.0/n);
    printf("%.2lf%%\n",arr[3]*100.0/n);
    system("pause");
    return 0;

}