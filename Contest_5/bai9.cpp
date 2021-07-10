#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

long long f[101][50005];

long long Tinh(long n, long k) {
	memset(f, 0, sizeof(f));
	for (int i = 0 ; i <= n ; i++) {
		f[i][0] = 0;
	}
	
	for (int i = 0 ; i <= k ; i++) {
		f[0][i] = 0;
	}
	
	for (int i = 1 ; i <= 9 ; i++) {
		f[1][i] = 1;
	}
	
	for (int i = 1 ; i <= n ; i++) {
		for (int u = 0 ; u <= 9 ; u++) {
			for (int j = u ; j <= k ; j++) {
				f[i][j] = ((f[i][j]%MOD) + (f[i-1][j-u]%MOD))%MOD;
			}
		}
	}
	return f[n][k];
}

int main() {
	int t;
	long n, k;
	
	cin >> t;
	while (t--) {
		cin >> n >> k;
		cout << Tinh(n, k) << endl;
	}
	return 0;
}
