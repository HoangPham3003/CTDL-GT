#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	int t;
	int k;
	int X[1005][51];
	int a;
	
	cin >> t;
	while (t--) {
		cin >> n >> k;
		
		X[0][0] = 0;
		
		for (int i = 1 ; i <= n ; i++) {
			X[0][i] = -1005;
		}
		
		for (int i = 1 ; i <= n ; i++) {
			cin >> a;
			a%=k;
			for (int j = 0 ; j < k ; j++) {
				X[i][j] = max(X[i-1][j], X[i-1][(j+k-a)%k] + 1);
			}
		}
		cout << X[n][0] << endl;
	}
	return 0;
}
