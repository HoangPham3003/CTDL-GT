#include <bits/stdc++.h>

using namespace std;

int n;
int a[1005][1005];

void Solve() {
	int so = 0;
	cin >> n;
	cin.ignore();
	
	for (int i = 1 ; i <= n ; i++) {
		for (int j = 1 ; j <= n ; j++) {
			a[i][j] = 0;
		}
	}
	
	string s;
	for (int i = 1 ; i <= n ; i++) {
		getline(cin, s);
		
		for (int j = 0 ; j <= s.length() ; j++) {
			if (s[j] >= '0' && s[j] <= '9') {
				so = so*10 + (s[j]-'0');
			}
			else {
				a[i][so] = 1;
				so = 0;
			}
		}
	}
	
	for (int i = 1 ; i <= n ; i++) {
		for (int j = 1 ; j <= n ; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	Solve();
	return 0;
}
