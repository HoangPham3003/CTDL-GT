#include <bits/stdc++.h>

using namespace std;

typedef struct {
	int dau;
	int cuoi;
}Edge;

Edge E[10005];

void Solve() {
	vector <int> vt[10005];
	int v, e;
	int m, n;
	cin >> v >> e;
	for (int i = 1 ; i <= e ; i++) {
		cin >> m >> n;
		E[i].dau = m;
		E[i].cuoi = n;
	}
	
	for (int i = 1 ; i <= e ; i++) {
		vt[E[i].dau].push_back(E[i].cuoi);
		vt[E[i].cuoi].push_back(E[i].dau);
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
