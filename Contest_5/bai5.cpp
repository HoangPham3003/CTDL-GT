#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

long long C[10005][10005];

long long Tinh(int n, int k) {
	for (int i = 0 ; i <= n ; i++) {
		for (int j = 0 ; j <= i ; j++) {
			if (j == 0 || j == i) C[i][j] = 1;
			else {
				C[i][j] = (C[i-1][j] + C[i-1][j-1])%MOD;
			}
		}
	}
	return C[n][k];
}

int main() {
	int t;
	int n, k;
	
	cin >> t;
	while (t--) {
		cin >> n >> k;
		cout << Tinh(n, k) << endl;
	}
	return 0;
}
