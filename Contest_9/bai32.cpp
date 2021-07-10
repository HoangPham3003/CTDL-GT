#include <bits/stdc++.h>

using namespace std;

int n, m;
int a[505][505];
queue <int> q;
int chk[505];

void BFS(int u) {
	q.push(u);
	chk[u] = false;
	
	while (!q.empty()) {
		int s = q.front();
		q.pop();
		
		for (int t = 1 ; t <= m ; t++) {
			if (a[s][t] == 1 && chk[t] == true) {
				chk[t] = false;
				q.push(t);
			}
		}
	}
}

void Solve() {
	cin >> n >> m;
	for (int i = 1 ; i <= n ; i++) {
		for (int j = 1 ; j <= m ; j++) {
			cin >> a[i][j];
		}
	}
	
	int dem = 0;
	
	memset(chk, true, sizeof(chk));
	for (int i = 1 ; i <= n ; i++)
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		
	}
	return 0;
}
