#include <bits/stdc++.h>

using namespace std;

int t;
long n;
long dodai;
long long ChiPhi;
priority_queue <long, vector <long>, greater<long> > q;
long s, v, r;

int main () {
	cin >> t;
	while (t--) {
		ChiPhi = 0;
		cin >> n;
		for (int i = 0 ; i < n ; i++) {
			cin >> dodai;
			q.push(dodai); 
		}
		
		while (q.size() > 1) {
			s = q.top();
			q.pop();
			v = q.top();
			q.pop();
			r = 0;
			r = s+v;
			ChiPhi += r;
			q.push(r);
		}
		q.pop();
		cout << ChiPhi << endl;
	}
	return 0;
}
