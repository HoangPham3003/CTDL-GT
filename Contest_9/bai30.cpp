#include <bits/stdc++.h>

using namespace std;

int v, e;
int u;
queue <int> q;
int chk[1005];
int SoLgDinh = 0;
vector <int> BacRa[1005];
vector <int> BacVao[1005];

int BFS_queue(int x) {
	SoLgDinh = 0;
	
	q.push(x);
	chk[x] = false;
	SoLgDinh += 1;
	
	while (!q.empty()) {
		int s = q.front();
		q.pop();
		for (int i = 0 ; i < BacRa[s].size() ; i++) {
			int t = BacRa[s][i];
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
	for (int i = 1 ; i <= v ; i++) {
		if (BacRa[i].size() != BacVao[i].size()) return 0;
	}
	return 1;
}

int chkLienThong() {
	for (int i = 1 ; i <= v ; i++) {
		for (int j = 1 ; j <= v ; j++) {
			chk[j] = true;
		}
		if (BFS_queue(i) == 1) return 1;
	}
	return 0;
}

void Solve() {
	for (int i = 0 ; i < 1005 ; i++) {
		BacRa[i].clear();
		BacVao[i].clear();
	} 
	cin >> v >> e;
	
	int m, n;
	while (e--) {
		cin >> m >> n;
		BacRa[m].push_back(n);
		BacVao[n].push_back(m);
	}
	
	for (int i = 1 ; i <= v ; i++) {
		chk[i] = true;
	}

	int ok1 = chkLienThong();
	int ok2 = chkBacDinh();
	if (ok1 == 1 && ok2 == 1) cout << "1" << endl;
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
