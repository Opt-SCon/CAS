#include<iostream>
using namespace std;
int main(){
    int n,i,j,sum=0,x;
    cin>>n;
    for(i=1;i<=n;i++){
        x=1;
        for(j=i;j>=1;j--){
            x*=j;
        }
        sum+=x;
    }
    cout <<sum;

    system("pause");
    return 0;
}