#include <bits/stdc++.h>

using namespace std;

int a[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int t;
int n;
int dem;
int x, r;

void Solve()
{
	dem = 0;
	while (n != 0)
	{
		x = 9;
		while (a[x] > n)
		{
			x--; // tim vtri to tien lon nhat ma n > a[x]
		}
		
		r = n/a[x]; 
		dem = dem + r;
		n = n - r*a[x];
	}
	cout << dem << endl;
}

int main ()
{
	cin >> t;
	while (t--)
	{
		cin >> n;
		Solve();
	}
	return 0;
}
