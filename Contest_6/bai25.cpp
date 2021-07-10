#include <bits/stdc++.h>

using namespace std;

long n;
long a[10000005];

int Ktra(int n) {
	for (int i = 1 ; i < n ; i++) {
		if (a[i] != a[i-1]) return 0;
	}
	return 1;
}

int main() {
	int t;
	
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0 ; i < n ; i++) {
			cin >> a[i];
		}
		
		if (Ktra(n) == 1) cout << "-1" << endl;
		else {
			sort(a, a+n);
			cout << a[0] << " " << a[1] << endl;
		}
	}
	return 0;
}
