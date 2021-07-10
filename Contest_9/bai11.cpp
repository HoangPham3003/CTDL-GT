#include <bits/stdc++.h>

using namespace std;

int a[1005][1005];
int v, e;
int u, k;
stack <int> st;
int chk[1005];
int truoc[1005];

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
				truoc[t] = s;
				break;
			}
		}
	}
}

void Solve() {
	cin >> v >> e >> u >> k;
	for (int i = 1 ; i <= v ; i++) {
		chk[i] = true;
		truoc[i] = 0;
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
	if (truoc[k] == 0) cout << "-1";
	else {
		int dd[1005];
		int x = 1;
		dd[0] = k;
		int j = truoc[k];
		dd[1] = j;
		while (j != u) {
			j = truoc[j];
			x++;
			dd[x] = j;
		}
		for (int i = x ; i >= 0 ; i--) {
			cout << dd[i] << " ";
		}
	}
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
