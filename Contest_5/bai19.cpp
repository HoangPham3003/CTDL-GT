#include <bits/stdc++.h>

using namespace std;

int Tinh(int n, int x, int y, int z) {
	int f[105] = {0};
	f[1] = x;
	for (int i = 2 ; i <= n ; i++) {
		if (i%2 == 0) {
			f[i] = min(f[i-1]+x, f[i/2]+z);
		}
		else {
			f[i] = min(f[i-1]+x, f[(i+1)/2]+z+y);
		}
	}
	return f[n];
}

int main() {
	int t, n, x, y, z;
	cin >> t;
	while (t--) {
		cin >> n >> x >> y >> z;
		cout << Tinh(n, x, y, z) << endl;
	}
	return 0;
}
