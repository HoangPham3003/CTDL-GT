#include <bits/stdc++.h>

using namespace std;

int MIN(int a, int b) {
	if (a < b) return a;
	return b;
}

int Solve(int n) {
	int ugly[1005];
	int i2 = 0, i3 = 0, i5 = 0;
	int NextUgly;
	ugly[0] = 1;
	
	int nextmultipleof2 = ugly[i2]*2;
	int nextmultipleof3 = ugly[i3]*3;
	int nextmultipleof5 = ugly[i5]*5;
	
	for (int i = 1 ; i < n ; i++) {
		NextUgly = MIN(nextmultipleof2, MIN(nextmultipleof3, nextmultipleof5));
		
		ugly[i] = NextUgly;
		
		if (NextUgly == nextmultipleof2) {
			i2 += 1;
			nextmultipleof2 = ugly[i2]*2;
		}
		if (NextUgly == nextmultipleof3) {
			i3 += 1;
			nextmultipleof3 = ugly[i3]*3;
		}
		if (NextUgly == nextmultipleof5) {
			i5 += 1;
			nextmultipleof5 = ugly[i5]*5;
		}
	}
	return ugly[n-1];
}

int main() {
	int t;
	int x;
	
	cin >> t;
	while (t--) {
		cin >> x;
		cout << Solve(x) << endl;
	}
	return 0;
}
