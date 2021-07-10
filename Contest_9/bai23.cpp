#include <bits/stdc++.h>

using namespace std;

int v, e;
int chk[1005];
vector <int> vt[1005];
int truoc[1005];

int DFS(int u) {
	stack <int> st;
	
	st.push(u);
	chk[u] = false;
	
	while (!st.empty()) {
		int s = st.top();
		st.pop();
		
		for (int i = 0 ; i < vt[s].size() ; i++) {
			int t = vt[s][i];
			
			if (chk[t] == true) {
				chk[t] = false;
				st.push(s);
				st.push(t);
				truoc[t] = s;
				break;
			}
			else if (chk[t] == false && t == u && t != truoc[s]) return 1;
		}
	}
	return 0;
}

int KtraChuTrinh() {
//	for (int i = 1 ; i <= v ; i++) {
		memset(chk, 0, sizeof(chk));
		memset(truoc, 0, sizeof(truoc));
//		if (DFS(i) == true) return 1;
//	}
//	return 0;
	if (DFS(1) == true) return 1;
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

	if (KtraChuTrinh() == 1) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}
