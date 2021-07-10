#include <bits/stdc++.h>

using namespace std;

int t;
string s1, s2;
int L[1005][1005];

int Tinh(string a, string b) {
    int m = a.length(), n = b.length();
    
    for (int i = 1 ; i <= m ; i++) {
		for (int j = 1 ; j <= n ; j++) {
	        if (a[i-1] == b[j-1]) {
				L[i][j] = L[i-1][j-1] + 1;
			}
	        else L[i][j] = max(L[i-1][j], L[i][j-1]);
    	}
	}
    return L[m][n];
}

int main() {
	cin >> t;
	cin.ignore();
	while (t--) {
		cin >> s1 >> s2;
		cout << Tinh(s1, s2) << endl;
	}
}
