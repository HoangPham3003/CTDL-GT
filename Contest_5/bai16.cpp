#include <bits/stdc++.h>

using namespace std;

int MAX(int x, int y) {
	if (x > y) return x;
	return y;
}

int Tinh(int a[], int f[], int n) {
	int res = 0;
	for (int i = 1 ; i <= n ; i++) {
		f[i] = a[i];
		for (int j = 1 ; j < i ; j++) {
			if (a[j] < a[i]) {
				f[i] = MAX(f[i], f[j]+a[i]);
			}
		}
		res = MAX(res, f[i]);
	}
	return res;
}

int main () {
	int t;
	int n;
	int a[1005];
	int f[1005];
	
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 1 ; i <= n ; i++) {
			cin >> a[i];
		}
		cout << Tinh(a, f, n) << endl;
	}
	return 0;
}
