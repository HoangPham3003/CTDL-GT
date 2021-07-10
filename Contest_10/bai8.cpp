#include <bits/stdc++.h>

using namespace std;

int v, e, u;
vector <int> vt[1005];
int T[1005][2];
bool ChuaXet[1005];
int SoCanh;

void Xuat() {
	for (int i = 1 ; i <= SoCanh ; i++) {
		cout << T[i][1] << " " << T[i][2] << endl;
	}
}

void Tree_DFS(int x) {
	ChuaXet[x] = false;	
	if (SoCanh == v-1) Xuat();
	else {
		for (int i = 0 ; i < vt[x].size() ; i++) {
			int t = vt[x][i];
			if (ChuaXet[t] == true) {
				SoCanh += 1;
				T[SoCanh][1] = x;
				T[SoCanh][2] = t;
				Tree_DFS(t);
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
	
	Tree_DFS(u);
	if (SoCanh < v-1) cout << "-1" << endl;
}


int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}
