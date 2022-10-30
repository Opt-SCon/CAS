#include<iostream>

int main()
{
	freopen("block.in", "r", stdin);
	freopen("block.out", "w", stdout);
	int n, i, j, x, max = 0, sum = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x);
		if (x > max)
		{
			sum += x - max;
			max = x;
		}
		else if (x < max)
		{
			max = x;
		}
	}
	printf("%d", sum);

	return 0;
}