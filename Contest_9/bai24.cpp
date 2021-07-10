#include <bits/stdc++.h>

using namespace std;

int v, e;
queue <int> q;
vector <int> vt[1005];
int visit[1005];
int cycle;

void BFS(int u) {
	q.push(u);
	visit[u] = 1;
	
	while (!q.empty()) {
		if (cycle == true) break;
		int s = q.front();
		q.pop();
		for (int i = 0 ; i < vt[s].size() ; i++) {
			int t = vt[s][i];
			if (visit[t] == 0) {
				q.push(t);
				visit[t] = 1;
			}
			else if (visit[t] == 1) cycle = true;
		}
		visit[s] = 2;
	}	
}

int KtraChuTrinh() {
	cycle = false;
	for (int i = 1 ; i <= v ; i++) {
		memset(visit, 0, sizeof(visit));
		BFS(i);
		if (cycle == true) return 1;
	}
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
