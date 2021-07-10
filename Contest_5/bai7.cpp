#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

long long Tinh(int n, int k) {
	long long f[n+5] = {0};
	f[0] = 1;
	f[1] = 1;
	
	for (int i = 2 ; i <= n ; i++) {
		for (int j = 1 ; j <= min(i,k) ; j++) {
			f[i] += f[i-j];
			f[i] %= MOD;
		}
	}
	
	return f[n];
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
