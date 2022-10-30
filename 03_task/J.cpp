#include<iostream>

using namespace std;

int main() {
	long long arr[3][10000] = {0};
	freopen("bad.in", "r", stdin);
	freopen("bad.out", "w", stdout);
	int n, q, i, l, r;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%lld", &arr[0][i]);
		if (arr[0][i] > 0) {
			arr[1][i] = arr[0][i] + arr[1][i - 1];
		} else arr[1][i] = arr[1][i - 1];
	}
	scanf("%d", &q);
	while (q--) {
		scanf("%d%d", &l, &r);
		printf("%lld\n", arr[1][r] - arr[1][l - 1]);
	}
	system("pause");
	return 0;
}