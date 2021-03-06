#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

int a[1005];
long long f[1005];
int n, k;

long long Tinh() {
	memset(f, 0, sizeof(f));
	f[0] = 1;
	for (int i = 1 ; i <= k ; i++) {
		for (int j = 1 ; j <= n ; j++) {
			if (a[j] <= i) {
				f[i] = (f[i] + f[i-a[j]])%MOD; 
			}
		}
	}
	return f[k];
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		for (int i = 1 ; i <= n ; i++) {
			cin >> a[i];
		}
		cout << Tinh() << endl;
	}
	return 0;
}
