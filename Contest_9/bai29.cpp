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

int chkBacDinh() {
	int dem = 0;
	for (int i = 1 ; i <= v ; i++) {
		if (vt[i].size() % 2 != 0) dem++;
	}
	
	if (dem == 2) return 1;
	else if (dem == 0) return 2;
	else return 0;
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
		chk[i] = true;
	}

	int ok1 = BFS_queue(1);
	int ok2 = chkBacDinh();
	if (ok1 == 1 && ok2 == 2) cout << "2" << endl;
	else if (ok1 == 1 && ok2 == 1) cout << "1" << endl;
	else cout << "0" << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}
