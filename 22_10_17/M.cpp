#include <iostream>

using namespace std;
int arr[300000] = {0}, cha[300000] = {0};

int main() {
	long long n, i, zSum = 0, fSum = 0;

	cin >> n;
	cin >> arr[1];
	cha[1] = arr[1];
	for (i = 2; i <= n; i++) {
		cin >> arr[i];
		cha[i] = arr[i] - arr[i - 1];
		if (cha[i] > 0)zSum += cha[i];
		else fSum += -cha[i];
	}
	cout << max(zSum, fSum) << endl;
	cout << abs(zSum - fSum) + 1 << endl;


	system("pause");
	return 0;
}