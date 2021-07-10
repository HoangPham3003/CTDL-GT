#include <bits/stdc++.h>

using namespace std;

int main () {
	int t;
	long n;
	long a[100005];
	long dem;
	
	cin >> t;
	while (t--) {
		int chk[100005]={0};
		cin >> n;
		for (int i = 0 ; i < n ; i++) {
			cin >> a[i];
			int t = a[i];
			chk[t] = 1;
		}
		sort(a, a+n);
		dem = 0;
		long l = a[0];
		long r = a[n-1];
		for (int i = l ; i <= r ; i++) {
			if (chk[i] == 0) dem++;
		}
		cout << dem << endl;
	}
	return 0;
}
