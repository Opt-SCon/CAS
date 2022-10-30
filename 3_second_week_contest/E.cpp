#include<iostream>
#include<string>
using namespace std;
int main(){
    char str[600]="";
    gets(str);
    int i,j,k,l;
    char temp;
    for(i=0;str[i]!=0;i++){
        for(j=i;str[j]!=0&&str[j]!=' ';j++);
        if(j>0){
            for(k=i,l=j-1;k<l;k++,l--){
                temp=str[k];
                str[k]=str[l];
                str[l]=temp;
            }
        }
        i+=j-i;
    }
    cout<<str;
    system("pause");
    return 0;
}