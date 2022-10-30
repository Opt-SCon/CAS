#include <stdio.h>
int main() {
	int n, q, i, arr[200050] = {0}, x, y, sum;
	scanf("%d%d",&n,&q);
	sum = 0;
	while (q--) {
		scanf("%d%d",&x,&y);
		arr[x]++;
		arr[y + 1]--;
	}
	for (i = 1; i < n; i++) {
		sum += arr[i];
		printf("%d ", sum);
	}
	printf("%d",sum+arr[i]);
	return 0;
}