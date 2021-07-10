#include <bits/stdc++.h>

using namespace std;

int a[1005][1005];
int v, e;
int u, k;
queue <int> q;
int chk[1005];
int truoc[1005];

void BFS_queue(int x) {
	q.push(x);
	chk[x] = false;
	
	while (!q.empty()) {
		int s = q.front();
		q.pop();
		for (int t = 1 ; t <= v ; t++) {
			if (chk[t] == true && a[s][t] == 1) {
				chk[t] = false;
				q.push(t);
				truoc[t] = s;
			}
		}
	}
}

void Solve() {
	cin >> v >> e >> u >> k;
	for (int i = 1 ; i <= v ; i++) {
		chk[i] = true;
		truoc[i] = 0;
		for (int j = 1 ; j <= v ; j++) {
			a[i][j] = 0;
		}
	}	
	
	int m, n;
	while (e--) {
		cin >> m >> n;
		a[m][n] = 1;
		a[n][m] = 1;
	}
	
	BFS_queue(u);
	if (truoc[k] == 0) cout << "-1";
	else {
		int dd[1005];
		int x = 1;
		dd[0] = k;
		int j = truoc[k];
		dd[1] = j;
		while (j != u) {
			j = truoc[j];
			x++;
			dd[x] = j;
		}
		for (int i = x ; i >= 0 ; i--) {
			cout << dd[i] << " ";
		}
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
