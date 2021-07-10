#include <bits/stdc++.h>

using namespace std;

void Swap(long &x, long &y)
{
	long tmp = x;
	x = y;
	y = tmp;
}

int main ()
{
	int t;
	int n;
	int k;
	int a[100];
	long sum1;
	long sum2;
	long res;
	
	cin >> t;
	while (t--)
	{
		sum1 = 0;
		sum2 = 0;
		cin >> n >> k;
		for (int i = 1 ; i <= n ; i++)
		{
			cin >> a[i];
		}
		sort(a+1, a+n+1);
		
		if (k <= n-k)
		{
			for (int i = 1 ; i <= k ; i++)
			{
				sum1 += a[i];
			}
			
			for (int i = k+1 ; i <= n ; i++)
			{
				sum2 += a[i];
			}
		}
		else if (k > n-k)
		{
			for (int i = 1 ; i <= n-k ; i++)
			{
				sum1 += a[i];
			}
			
			for (int i = n-k+1 ; i <= n ; i++)
			{
				sum2 += a[i];
			}
		}
		
		res = sum2 - sum1;
		cout << res << endl;
	}
	return 0;
}
