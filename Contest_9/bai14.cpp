#include <bits/stdc++.h>

using namespace std;

int Q;
int v, e;
int u, k;
queue <int> q;
int chk[1005];
int truoc[1005];
vector <int> vt[1005];

void BFS_queue(int x) {
	q.push(x);
	chk[x] = false;
	
	while (!q.empty()) {
		int s = q.front();
		q.pop();
		for (int i = 0 ; i < vt[s].size() ; i++) {
			int t = vt[s][i];
			if (chk[t] == true) {
				chk[t] = false;
				q.push(t);
				truoc[t] = s;
			}
		}
	}
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
	
	cin >> Q;
	while (Q--) {
		cin >> u >> k;
		for (int i = 1 ; i <= v ; i++) {
			chk[i] = true;
			truoc[i] = 0;
		}
		BFS_queue(u);
		if (truoc[k] == 0) cout << "NO" << endl;
		else {
			cout << "YES" << endl;
		}
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
