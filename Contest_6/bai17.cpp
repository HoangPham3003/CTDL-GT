#include <bits/stdc++.h>

using namespace std;

long long a[1000005];
long long b[1000005];

int main() {
	int t;
	long n, m;
	long long min;
	long long max;
	long long res;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		for (long i = 0 ; i < n ; i++) {
			cin >> a[i];
		}
		for (long i = 0 ; i < m ; i++) {
			cin >> b[i];
		}
		
		sort(a, a+n);
		sort(b, b+n);
		max = a[n-1];
		min= b[0];
		
		res = min*max;
		cout << res << endl;
	} 
	return 0;
}
