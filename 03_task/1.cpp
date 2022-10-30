#include<iostream>
using namespace std;


int main()
{
	int pai[14];
	int n;
	int a = 0, b = 0, t;
	for (int i = 0; i < 14; ++i)
		pai[i] = 4;
	cin >> n;
	for (int  i = 0; i < 2; ++i)
	{
		cin >> t;
		if (t >= 10)
			a += 10;
		else a += t;
		--pai[t];
	}
	for (int i = 0; i < 2; ++i)
	{
		cin >> t;
		if (t >= 10)
			b += 10;
		else b += t;
		--pai[t];
	}
	while (n--)
	{
		cin >> t;
		if (t >= 10)
		{
			a += 10;
			b += 10;
		}
		else
		{
			a += t;
			b += t;
		}
		--pai[t];
	}
	if (a > b)
	{
		int i = 1;
		while (i < 14)
		{
			if (pai[i])
			{
				int n = i >= 10 ? 10 : i;
				if (b + n == 23 || a + n > 23)
				{
					if (b + n > 23)
						cout << -1 << endl;
					else
						cout << i << endl;
					break;
				}
			}
			++i;
		}
		if (i >= 14)
			cout << -1 << endl;
	}
	else  if (a < b)
	{
		int  i = 1;
		while (i < 14)
		{
			if (pai[i])
			{
				int n = i >= 10 ? 10 : i;
				if (b + n == 23)
				{
					cout << i << endl;
					break;
				}
			}
			++i;
		}
		if (i >= 14)
			cout << -1 << endl;
	}
	else if (a == b)
	{
		int i = 1;
		while (i < 14)
		{
			if (pai[i])
			{
				int n = i >= 10 ? 10 : i;
				if (b + n == 23)
				{
					cout << i << endl;
					break;
				}
			}
			++i;
		}
		if (i >= 14)
			cout << -1 << endl;
	}
	return 0;
}
