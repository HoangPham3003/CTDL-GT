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
	
	while (!st.empty()) {
		int s = st.top();
		st.pop();
		
		for (int t = 1 ; t <= v ; t++) {
			if (chk[t] == true && a[s][t] == 1) {
				chk[t] = false;
				st.push(s);
				st.push(t);
				break;
			}
		}
	}
}

void Solve() {
	cin >> v >> e;
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
		a[n][m] = 1;
	}
	
	int dem = 0;
	
	for (int i = 1 ; i <= v ; i++) {
		if (chk[i] == true) {
			dem += 1;
			DFS_stack(i);
		}
	}
	cout << dem << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}
