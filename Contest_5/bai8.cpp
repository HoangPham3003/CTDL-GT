#include <bits/stdc++.h>

using namespace std;

int Tinh(int a[][505], int n, int m) {
	int res = 0;
	int f[n+5][m+5];
	memset(f, 0, sizeof(f));
	for (int i = 1 ; i <= n ; i++) {
		for (int j = 1 ; j <= m ; j++) {
			f[i][j] = a[i][j];
		}
	}
	
	for (int i = 1 ; i <= n ; i++) {
		for (int j = 1 ; j <= m ; j++) {
			if (a[i][j]==a[i-1][j-1] && a[i][j]==a[i-1][j] && a[i][j]==a[i][j-1] && a[i][j]==1) {
				f[i][j] = min(min(f[i-1][j-1], f[i-1][j]), f[i][j-1]) + 1;
			}
			res = max(res, f[i][j]);
		}
	}
	return res;
}

int main() {
	int t;
	int n, m;
	int a[505][505];
	
	cin >> t;
	while (t--) {
		cin >> n >> m;
		for (int i = 1 ; i <= n ; i++) {
			for (int j = 1 ; j <= m ; j++) {
				cin >> a[i][j];
			}
		}
		cout << Tinh(a, n, m) << endl;
	}
	return 0;
}
