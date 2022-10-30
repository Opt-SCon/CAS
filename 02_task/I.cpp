#include <iostream>
using namespace std;

int main()
{
	int t, n, i;
	cin >> t;
	while (t--)
	{
		cin >> n;
		cout << n << endl;
		for (i = 1; i <= n; i++)
		{
			cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}
