#include <bits/stdc++.h>

using namespace std;

int t;
int n;
int a[100];
int b[100];

int main () {
	cin >> t;
	
	while (t--) {
		cin >> n;
		for (int i = 0 ; i < n ; i++) {
			cin >> a[i];
			b[i] = a[i];
		}
		
		sort(b, b+n);
		bool chk = true;
		for (int i = 0 ; i < n ; i++) {
			if (b[i] == a[i] || b[i] == a[n-i-1]) {
				chk = true;
			}
			else {
				chk = false;
				break;
			}
		}
		
		if (chk == false) cout << "No" << endl;
		else cout << "Yes" << endl;
	}
	return 0;
}
