#include <bits/stdc++.h>

using namespace std;

int Tinh(string s1, string s2) {
	int C[105][105] = {0};
	int n = s1.length();
	int m = s2.length();
	
	for (int i = 0 ; i <= n ; i++) {
		C[i][0] = i;
	}
	for (int i = 0 ; i <= m ; i++) {
		C[0][i] = i;
	}
	for (int i = 1 ; i <= n ; i++) {
		for (int j = 1 ; j <= m ; j++) {
			if (s1[i-1] == s2[j-1]) {
				C[i][j] = C[i-1][j-1];
			}
			else C[i][j] = min(min(C[i-1][j-1], C[i-1][j]), C[i][j-1]) + 1;
		}
	}
	return C[n][m];
}

int main() {
	int t;
	string s1;
	string s2;
	
	cin >> t;
	while (t--) {
		cin >> s1 >> s2;
		cout << Tinh(s1, s2) << endl;
	}
	return 0;
}
