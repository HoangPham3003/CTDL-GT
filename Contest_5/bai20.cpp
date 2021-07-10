#include <bits/stdc++.h>

using namespace std;

int chuyen(char c) {
	return c-'0';
}

long long Tinh(string s) {
	int n = s.length();
	long long f[15];
	memset(f, 0, sizeof(f));
	f[0] = chuyen(s[0]);
	long long kq = f[0];
	for (int i = 1 ; i < n ; i++) {
		int t = chuyen(s[i]);
		f[i] = f[i]*10 + t*(i+1);
		kq = kq + f[i];
	}
	return kq;
}

int main() {
	int t;
	string s;
	
	cin >> t;
	cin.ignore();
	while (t--) {
		cin >> s;
		cout << Tinh(s) << endl;
	}
	return 0;
}
