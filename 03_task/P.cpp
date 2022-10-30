#include<iostream>

using namespace std;

int main() {
	int t, n, q, i, x, y, ji, ou;
	scanf("%d", &t);
	long long abc, sum;
	while (t--) {
		sum = 0;
		ji = 0;
		ou = 0;
		scanf("%d%d", &n, &q);
		while(n--) {
			scanf("%lld", &abc);
			sum += abc;
			if (abc % 2) ji++;
			else ou++;
		}
		while (q--) {
			scanf("%d%d", &x, &y);
			if (x % 2) {
				sum += ji * y;
				if (y % 2) {
					ou += ji;
					ji = 0;
				}
			} else {
				sum += ou * y;
				if (y % 2) {
					ji += ou;
					ou = 0;
				}
			}
			cout << sum << endl;
		}
	}
	return 0;
}