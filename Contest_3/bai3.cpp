#include <bits/stdc++.h>
#define Mod 1000000007

using namespace std;

int t;
int n;
int a[10000005];
long long res;

int main ()
{
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (long i = 0 ; i < n ; i++)
		{
			cin >> a[i];
		}
		sort(a, a+n);
		
		long long res = 0;
		
		for (long i = 1 ; i < n ; i++)
		{
			res += ((a[i]%Mod) * (i%Mod));
			res %= Mod; 
		}
		cout << res << endl;
	}
	return 0;
}
