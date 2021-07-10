#include <bits/stdc++.h>

using namespace std;

int f[1005][1005];

int Tinh(string s) {
	int kq = 1;
	int m = s.length();
	for (int i = 0 ; i < m ; i++) {
		f[i][i] = 1;
	}
	for (int k = 1 ; k <= m-1 ; k++) {
		for (int i = 0 ; i <= m-k-1 ; i++) {
			int j = i + k;
			if (s[i] == s[j] && k != 1) {
				f[i][j] = f[i+1][j-1];
			}
			else if (s[i] == s[j] && k == 1) {
				f[i][j] = 1;
			}
			else {
				f[i][j] = 0;
			}
			
			if (f[i][j] == 1) kq = max(kq, j-i+1);
		}
	}
	return kq;
}

int main() {
	int t;
	string s;
	
	cin >> t;
	cin.ignore();
	while (t--) {
		cin >> s;
		cout << Tinh(s) << endl;
	}
	return 0;
}
