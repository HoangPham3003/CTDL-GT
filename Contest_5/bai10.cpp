#include <bits/stdc++.h>

using namespace std;

int A[505][505];
int C[505][505];
int n, m;

int Tinh() {
	memset(C, 0, sizeof(C));
	
	int kq = 0;
	for (int i = 1 ; i <= m ; i++) {
		C[1][i] = C[1][i-1] + A[1][i];
	}
	for (int i = 1 ; i <= n ; i++) {
		C[i][1] = C[i-1][1] + A[i][1];
	}
	
	for (int i = 2 ; i <= n ; i++) {
		for (int j = 2 ; j <= m ; j++) {
			C[i][j] = min(min(C[i][j-1], C[i-1][j-1]), C[i-1][j]) + A[i][j];
		}
	}
	return C[n][m];
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		for (int i = 1 ; i <= n ; i++) {
			for (int j = 1 ; j <= m ; j++) {
				cin >> A[i][j];
			}
		}
		cout << Tinh() << endl;
	}
	return 0;
}
