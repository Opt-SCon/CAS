#include<iostream>

using namespace std;

int main() {
	int t, n, i, j;
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0; i < n; i++) {
			for (j = 0; j <= i; j++) {
				if (j == 0 || j == i) cout << 1 << " ";
				else cout << 0 << " ";
			}
			cout << endl;
		}
	}

	system("pause");
	return 0;
}