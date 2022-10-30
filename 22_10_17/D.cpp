#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,i;
    char x[105]="",y[105]="",z[105]="";
    cin>>n;
    cin>>x>>y;
    for(i=0;i<n;i++){
        if(x[i]>y[i]) z[i]=y[i];
        else if(x[i]==y[i]) z[i]=x[i]+1;
        else {
            cout<<-1;
            return 0;
        }
    }
    cout<<z;
    system("pause");
    return 0;
}