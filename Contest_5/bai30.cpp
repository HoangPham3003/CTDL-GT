#include <bits/stdc++.h>

using namespace std;

int s[10005];

void Tinh() {
	for (int i = 1 ; i <= 10000 ; i++) {
		s[i] = i;
		for (int j = 1 ; j <= sqrt(i) ; j++) {
			s[i] = min(s[i], s[i-j*j]+1);
		}
	}
}

int main() {
	int t;
	int n;
	
	cin >> t;
	while (t--) {
		cin >> n;
		Tinh();
		cout << s[n] << endl;
	}
	return 0;
}
