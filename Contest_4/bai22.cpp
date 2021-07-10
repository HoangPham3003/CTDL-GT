#include <bits/stdc++.h>

using namespace std;

long BinarySearch(long a[], long left, long right, long k)
{
	if (left > right) return -1;
	else
	{	
		long mid = (left+right)/2;
		if (a[mid] == k) return mid;
		else if (a[mid] > k) return BinarySearch(a, left, mid-1, k);
		else return BinarySearch(a, mid+1, right, k);
	}
}

int main ()
{
	int t;
	long n;
	long k;
	long a[100005];
	
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		for (int i = 1 ; i <= n ; i++)
		{
			cin >> a[i];
		}
		
		long res = BinarySearch(a, 1, n, k);
		if (res == -1) cout << "NO" << endl;
		else cout << res << endl;
	}
	return 0;
}
