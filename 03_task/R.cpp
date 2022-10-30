#include<iostream>

using namespace std;

int main() {
	int t, n, k, arr[55], flag;
	cin >> t;
	while (t--) {
		flag = 0;
		cin >> n >> k;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			if (arr[i] != 0) flag = 1;
		}
		if (flag == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	system("pause");
	return 0;
}