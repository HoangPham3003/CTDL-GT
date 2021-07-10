#include <bits/stdc++.h>

using namespace std;

int t;
int n;
int s;
int a[205];
int L[40005];

int KiemTra() {
	memset(L, 0, sizeof(L));
	L[0] = 1;
	for (int i = 1 ; i <= n ; i++) {
		for (int j = s ; j >= a[i] ; j--) {
			if (L[j] == 0 && L[j-a[i]] == 1) {
				L[j] = 1;
			}
		}
	}
	return L[s];
}

int main() {
	cin >> t;
	while (t--) {
		cin >> n >> s;
		for (int i = 1 ; i <= n ; i++) {
			cin >> a[i];
		}
		int res = KiemTra();
		if (res == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
