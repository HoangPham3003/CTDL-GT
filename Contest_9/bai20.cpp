#include <bits/stdc++.h>

using namespace std;

int v, e;
int u;
queue <int> q;
int chk[1005];
int SoLgDinh = 0;
vector <int> vt[1005];

int BFS_queue(int x) {
	SoLgDinh = 0;
	
	q.push(x);
	chk[x] = false;
	SoLgDinh += 1;
	
	while (!q.empty()) {
		int s = q.front();
		q.pop();
		for (int i = 0 ; i < vt[s].size() ; i++) {
			int t = vt[s][i];
			if (chk[t] == true) {
				chk[t] = false;
				q.push(t);
				SoLgDinh += 1;
			}
		}
	}
	if (SoLgDinh == v-1) return 1;
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
	
	bool ok = true;
	
	for (int i = 1 ; i <= v ; i++) {
		for (int j = 1 ; j <= v ; j++) {
			chk[j] = true;
		}
		chk[i] = false;
		if (i == 1) {
			if (BFS_queue(2) == 0) cout << i << " ";
		}
		else {
			if (BFS_queue(1) == 0) cout << i << " ";
		}
		chk[i] = true;
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
