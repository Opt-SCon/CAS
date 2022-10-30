#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int i,j;
    double n,sum=0;
    char x[505]="",y[505]="";
    cin>>n;
    cin>>x>>y;
    for(i=0;i<strlen(x);i++){
        if(x[i]==y[i]) sum++;
    }
    if(sum/strlen(x)>=n) cout<<"yes";
    else cout<<"no";
    system("pause");
    return 0;
}