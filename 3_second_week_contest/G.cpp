#include<iostream>
#include<string>
using namespace std;
int main(){
    int i,j;
    char a,b;
    string str;
    cin>>str>>a>>b;
    for(i=0;str[i]!=0;i++){
        if(str[i]==a){
            str[i]=b;
        }
    }
    cout <<str;
    system("pause");
    return 0;
}