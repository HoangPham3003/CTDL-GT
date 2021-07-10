#include <bits/stdc++.h>
#define MOD 1000000007;
using namespace std;

long long Tinh(int n, int k) {
	long long kq = 1;
	for (int i = n ; i >= n-k+1 ; i--) {
		kq = (kq*i)%MOD;
	}
	return kq;
}

int main() {
	int t;
	int n, k;
	
	cin >> t;
	while (t--) {
		cin >> n >> k;
		cout << Tinh(n, k) << endl;
	}
	return 0;
}
