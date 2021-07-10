#include <bits/stdc++.h>

using namespace std;

int n;
int v;
int a[1005];
int c[1005];
int f[1005][1005];

int Tinh() {
	memset(f, 0, sizeof(f));
	for (int i = 1 ; i <= n ; i++) {
		for (int j = 1 ; j <= v ; j++) {
			if (j>=a[i] && f[i-1][j-a[i]]+c[i]>f[i-1][j]) {
				f[i][j] = f[i-1][j-a[i]]+c[i];
			}
			else f[i][j] = f[i-1][j];
		}
	}	
	return f[n][v];
}

int main() {
	int t;
	
	cin >> t;
	while (t--) {
		cin >> n >> v;
		for (int i = 1 ; i <= n ; i++) {
			cin >> a[i];
		}
		for (int i = 1 ; i <= n ; i++) {
			cin >> c[i];
		}
		cout << Tinh() << endl;
	}
	return 0;
}
