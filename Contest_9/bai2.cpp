#include <bits/stdc++.h>

using namespace std;

int n;
int x;
vector <int> v[105];

void Solve() {
	int so = 0;
	cin >> n;
	cin.ignore();
	string s;
	for (int i = 1 ; i <= n ; i++) {
		getline(cin, s);
		for (int j = 0 ; j <= s.length() ; j++) {
			if (s[j] >= '0' && s[j] <= '9') {
				so = so*10 + (s[j] - '0');
			}
			else {
				v[i].push_back(so);
				so = 0;
			}
		}
	}
	
	for (int i = 1 ; i <= n ; i++) {
		for (int j = 0 ; j < v[i].size() ; j++) {
			if (v[i][j] > i) {
				cout << i << " " << v[i][j] << endl;
			}
		}
	}
}

int main() {
	Solve();
	return 0;
}
