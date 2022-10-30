#include<iostream>
using namespace std;
int main()
{
	bool flag= false;
	int t, n, arr[55] = { 0 }, i, j, temp;
	char str[3][55] = { "" };
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		for (i = 0; i < n; i++)	cin >> arr[i];
		cin >> str[1];

		for (i = 0; i < n; i++)
		{
			if (arr[i]>=0)
			{
				temp=arr[i];
				for (j = i; j < n; j++)
				{
					if (temp == arr[j])
					{
						flag= true;
						str[0][j] = str[1][i];
						arr[j]=-1;
					}
				}
				if(flag== false) str[0][i] = str[1][i];
				else flag= false;
			}
		}
		for(i=0;i<n;i++)
		{
			if(str[0][i]!=str[1][i])
			{
				break;
			}
		}
		 if(i==n) cout << "YES" << endl;
		 else cout<<"NO"<<endl;


	}
	return 0;
}