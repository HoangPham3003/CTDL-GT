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
	}
	
	bool ok = true;
	
	for (int i = 1 ; i <= v ; i++) {
		for (int j = 1 ; j <= v ; j++) {
			chk[j] = true;
		}
		
		if (BFS_queue(i) == 0) {
			ok = false;
			break;
		}
	}
	if (ok == true) cout << "YES" << endl;
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
