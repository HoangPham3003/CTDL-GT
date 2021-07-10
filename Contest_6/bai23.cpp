#include <bits/stdc++.h>

using namespace std;

long n;
long a[10000005];
long chuaxet[10000005];

int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		for (long i = 1 ; i <= n ; i++) {
			if (i < n) {
				cin >> a[i];
			}
			chuaxet[i] = 0;
			chuaxet[a[i]] = 1;
		}
		for (long i = 1 ; i <= n ; i++) {
			if (chuaxet[i] == 0) {
				cout << i << endl;
				break;
			} 
		}
	}
	return 0;
}
