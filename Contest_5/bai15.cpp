#include <bits/stdc++.h>

using namespace std;

int t;
string s1, s2, s3;
int L[105][105][105];

int Tinh(string a, string b, string c, int m, int n, int p) {
    for (int i = 1 ; i <= m ; i++) {
		for (int j = 1 ; j <= n ; j++) {
			for (int k = 1 ; k <= p ; k++) {
				if (a[i-1] == b[j-1] && b[j-1] == c[k-1] && c[k-1] == a[i-1]) {
				L[i][j][k] = L[i-1][j-1][k-1] + 1;
				}
		        else L[i][j][k] = max(max(L[i-1][j][k], L[i][j-1][k]), L[i][j][k-1]);	
			}
    	}
	}
    return L[m][n][p];
}

int main() {
	int m, n, p;
	cin >> t;
	while (t--) {
		cin >> m >> n >> p;
		cin.ignore();
		cin >> s1 >> s2 >> s3;
		cout << Tinh(s1, s2, s3, m, n, p) << endl;
	}
}
