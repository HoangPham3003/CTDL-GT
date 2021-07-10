#include <bits/stdc++.h>
#define Mod 1000000007

using namespace std;

unsigned long long LuyThua(long a, long long x)
{
	if (x == 0) return 1;
	long long kq = LuyThua(a, x/2);
	if (x % 2 == 0) return (((kq%Mod)*(kq%Mod))%Mod);
	else if (x % 2 != 0) return ((((kq%Mod)*(kq%Mod))%Mod *a)%Mod);
}

int main ()
{
	int t;
	long n;
	long long k;
	unsigned long long res;
	
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		res = LuyThua(n, k);
		cout << res << endl;
	}
	return 0;
}
