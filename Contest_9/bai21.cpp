#include <bits/stdc++.h>

using namespace std;

int v, e;
int u;
stack <int> st;
int chk[1005];
int SoLgDinh = 0;
vector <int> vt[1005];
vector <int> chkVt[1005];

int DFS_stack(int x) {
	SoLgDinh = 0;
	
	st.push(x);
	chk[x] = false;
	SoLgDinh += 1;
	
	while (!st.empty()) {
		int s = st.top();
		st.pop();
		
		for (int i = 0 ; i < vt[s].size() ; i++) {
			int t = vt[s][i];
			if (chk[t] == true) {
				SoLgDinh += 1;
				chk[t] = false;
				st.push(s);
				st.push(t);
				break;
			}
		}
	}
	if (SoLgDinh == v) return 1;
	return 0;
}

void Solve() {
	for (int i = 0 ; i < 1005 ; i++) {
		vt[i].clear();
	}
	
	cin >> v >> e;
	
	int m, n;
	while (e--) {
		cin >> m >> n;
		vt[m].push_back(n);
		vt[n].push_back(m);
	}
	
	for (int i = 1 ; i <= v ; i++) {
		for (int j = 0 ; j < vt[i].size() ; j++) {
			int u = vt[i][j];
			vt[i].erase(vt[i].begin()+j);
			
			for (int k = 1 ; k <= v ; k++) {
				chk[k] = true;
			}
			
			if (DFS_stack(i) == 0 && i < u) cout << i << " " << u << " ";
			vt[i].insert(vt[i].begin()+j,u);
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
