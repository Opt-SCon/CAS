#include<iostream>
#include<string>
#include <vector>
using namespace std;

int main() {
	string str;
	char s;
	int t, n, i, j, mx,x;
	cin >> t;
	while (t--) {
		mx = 0;
		cin >> n >> s;
		cin >> str;
		str += str;
		vector<int> a;
		if (s == 'g') {
			cout << 0 << endl;
			continue;
		} else {
			for(i=0;i<str.size();i++){
				if(str[i]=='g') a.push_back(i);
			}
			for(i=0;i<n;i++){
				if(str[i]==s){
					x= lower_bound(a.begin(),a.end(),i)-a.begin();
					mx=max(a[x]-i,mx);
				}
			}

		}


		cout << mx << endl;
	}
	system("pause");
	return 0;
}