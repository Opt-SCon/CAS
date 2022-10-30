#include<iostream>

using namespace std;

int main() {
	int i,j,t,n,arr[100050]={0},sum;
	cin>>t;
	while(t--){
		sum=0;
		cin>>n;
		for(i=0;i<n;i++) cin>>arr[i];
		i=0;
		j=n-1;
		while(i<j){
			if(arr[i]==1){
				while(arr[j]!=0&&i<j) j--;
				if(i<j)
				{
					arr[j]+=arr[i];
					sum++;
				}
			}
			i++;
		}
		cout<<sum<<endl;
	}
	system("pause");
	return 0;
}