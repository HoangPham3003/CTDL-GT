#include <bits/stdc++.h>

using namespace std;

long n;
long a[10000005];
long b[10000005];

int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 1 ; i <= n ; i++) {
			cin >> a[i];
			b[i] = a[i];
		}
		
		sort(b+1, b+n+1);
		int i = 1;
		while (i <= n) {
			if (a[i]!=b[i]) break;
			else i++;
		}
		int j = n;
		while (j >= 1) {
			if (a[j] != b[j]) break;
			else j--;
		}
		
		cout << i << " " << j << endl;
	}
	return 0;
}
