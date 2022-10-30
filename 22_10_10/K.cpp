#include<iostream>
#include "stack"
using namespace std;
stack<int> arr;
int main(){
    int n,x,sum=0;
    cin>>n;
    while(n--){
        cin>>x;
        while(!arr.empty()&&arr.top()-x==1){
            arr.pop();
            sum++;
        }
        if(!arr.empty()&&x-arr.top()==1) sum++;
        else arr.push(x);
    }
    cout<<sum<<endl;
    system("pause");
    return 0;
}
