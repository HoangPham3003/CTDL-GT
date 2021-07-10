#include <bits/stdc++.h>

using namespace std;

int v, e, u;
vector <int> vt[1005];
int T[1005][2];
bool ChuaXet[1005];
int SoCanh;
queue <int> q;

void Xuat() {
	for (int i = 1 ; i <= SoCanh ; i++) {
		cout << T[i][1] << " " << T[i][2] << endl;
	}
}

void Tree_BFS(int x) {
	q.push(x);
	ChuaXet[x] = false;
	
	while (!q.empty()) {
		int s = q.front();
		q.pop();
		
		for (int i = 0 ; i < vt[s].size() ; i++) {
			int t = vt[s][i];
			if (ChuaXet[t] == true) {
				ChuaXet[t] = false;
				q.push(t);
				SoCanh += 1;
				T[SoCanh][1] = s;
				T[SoCanh][2] = t;
			}
		}
	}
}

void Solve() {
	for (int i = 1 ; i <= 1005 ; i++) {
		vt[i].clear();
	}
	memset(ChuaXet, true, sizeof(ChuaXet));
	SoCanh = 0;
	
	cin >> v >> e >> u;
	
	int a, b;
	while (e--) {
		cin >> a >> b;
		vt[a].push_back(b);
		vt[b].push_back(a);
	}
	
	Tree_BFS(u);
	if (SoCanh < v-1) cout << "-1" << endl;
	else Xuat();
}


int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}
