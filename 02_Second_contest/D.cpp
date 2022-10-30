#include<iostream>
using namespace std;
int main()
{
    long long a;
    cin>>a;
    if(a%3==0)cout <<3<<' ';
    if(a%5==0) cout<<5<<' ';
    if(a%7==0) cout<<7;
    if(a%7&&a%5&&a%3) cout<<'n';
    system("pause");
    return 0;
}