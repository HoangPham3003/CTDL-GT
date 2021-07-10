#include <bits/stdc++.h>

using namespace std;

int a[1005][1005];
int v, e;
int u;
stack <int> st;
int chk[1005];

void DFS_stack(int x) {
	st.push(x);
	chk[x] = false;
	cout << u << " ";
	while (!st.empty()) {
		int s = st.top();
		st.pop();
		
		for (int t = 1 ; t <= v ; t++) {
			if (chk[t] == true && a[s][t] == 1) {
				cout << t << " ";
				chk[t] = false;
				st.push(s);
				st.push(t);
				break;
			}
		}
	}
}

void Solve() {
	cin >> v >> e >> u;
	for (int i = 1 ; i <= v ; i++) {
		chk[i] = true;
		for (int j = 1 ; j <= v ; j++) {
			a[i][j] = 0;
		}
	}	
	
	int m, n;
	while (e--) {
		cin >> m >> n;
		a[m][n] = 1;
	}
	
	DFS_stack(u);
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}
