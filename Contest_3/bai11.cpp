#include <bits/stdc++.h>
#define Mod 1000000007

using namespace std;

long n;
priority_queue <long long, vector <long long>, greater <long long> > q;
long long DoDai;
long long ChiPhi;

int main () {
	cin >> n;
	while (n--) {
		cin >> DoDai;
		q.push(DoDai);
	}
	
	while (q.size() > 1) {
		long long s = q.top();
		q.pop();
		long long t = q.top();
		q.pop();
		long long r = ((s%Mod)+(t%Mod))%Mod;
		ChiPhi = ((ChiPhi%Mod)+(r%Mod))%Mod;
		q.push(r);
	}
	q.pop();
	cout << ChiPhi << endl;
	return 0;
}
