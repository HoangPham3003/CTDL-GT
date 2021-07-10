#include <bits/stdc++.h>

using namespace std;

int t;
long n;
long long a[10000005];
long long b[10000005];
unsigned long long res;

int main ()
{
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 0 ; i < n ; i++)
		{
			cin >> a[i];
		}
		
		for (int i = 0 ; i < n ; i++)
		{
			cin >> b[i];
		}
		
		sort(a,a+n);
		sort(b,b+n,greater<int>());
		
		res = 0;
		for (int i = 0 ; i < n ; i++)
		{
			res = res + a[i]*b[i];
		}
		
		cout << res << endl;
	}
	
	return 0;
}
