#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	int n, m;
	int a[100005];
	int b[100005];
	int chuaxet[100005];
	priority_queue <int, vector<int>, greater<int> > c;
	priority_queue <int, vector<int>, greater<int> > d;
	
	cin >> t;
	while (t--) {
		cin >> n >> m;
		int chuaxet[100005]={0};
		for (int i = 0 ; i < n ; i++) {
			cin >> a[i];
			c.push(a[i]);
			chuaxet[a[i]] = 1;
		}
		for (int i = 0 ; i < m ; i++) {
			cin >> b[i];
		}
		
		for (int i = 0 ; i < m ; i++) {
			if (chuaxet[b[i]] == 0) {
				c.push(b[i]);
				chuaxet[b[i]] = 1;
			}
			else d.push(b[i]);
		}
		
		while (!c.empty()) {
			cout << c.top() << " ";
			c.pop();
		}
		cout << endl;
		
		while (!d.empty()) {
			cout << d.top() << " ";
			d.pop();
		}
		cout << endl;
	}
	return 0;
}
