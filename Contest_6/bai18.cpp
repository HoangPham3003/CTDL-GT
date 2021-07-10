#include <bits/stdc++.h>

using namespace std;

long long x;
priority_queue <long long, vector<long long>, greater <long long> > res;

int main() {
	int t;
	long n, m;
	
	cin >> t;
	while (t--) {
		cin >> n >> m;
		for (int i = 0 ; i < n ; i++) {
			cin >> x;
			res.push(x);
		}
		
		for (int i = 0 ; i < m ; i++) {
			cin >> x;
			res.push(x);
		}
		
		while (!res.empty()) {
			cout << res.top() << " ";
			res.pop();
		}
		cout << endl;
	}
	return 0;
}
