#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	int n;
	int x;
	int a[1005];
	int dem = 0;
	
	cin >> t;
	while (t--) {
		dem = 0;
		cin >> n >> x;
		for (int i = 0 ; i < n ; i++) {
			cin >> a[i];
			if (a[i] == x) dem++;
		}
		if (dem != 0) cout << dem << endl;
		else cout << "-1" << endl;
	}
 	return 0;
}
