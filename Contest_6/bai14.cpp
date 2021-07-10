#include <bits/stdc++.h>

using namespace std;

int X[1000005];

void SangNgto(int n) {
	for (int i = 0 ; i <= n ; i++) {
		X[i] = 1;
	}
	X[0] = 0;
	X[1] = 0;
	for (int i = 2 ; i <= sqrt(n) ; i++) {
		if (X[i] == 1) {
			for (int j = i*i ; j <= n ; j+=i) {
				X[j] = 0;
			}
		}
	}
}

int main() {
	int t;
	int n;
	
	cin >> t;
	while (t--) {
		cin >> n;
		SangNgto(n);
		int dem = 0;
		for (int i = 2 ; i <= n/2 ; i++) {
			if (X[i] == 1 && X[n-i] == 1) {
				cout << i << " " << n-i << endl;
				dem += 1;
				break;
			}
		}
		if (dem == 0) cout << "-1" << endl;
	}
	return 0;
}
