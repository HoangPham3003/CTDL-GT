#include <bits/stdc++.h>

using namespace std;

int v, e;
int m, n;

void Solve() {
	vector <int> vt[10005];
	
	cin >> v >> e;
	while (e--) {
		cin >> m >> n;
		vt[m].push_back(n);
	}	
	
	for (int i = 1 ; i <= v ; i++) {
		cout << i << ": ";
		for (int j = 0 ; j < vt[i].size() ; j++) {
			cout << vt[i][j] << " ";
		}
		cout << endl;
	}
}


int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}
