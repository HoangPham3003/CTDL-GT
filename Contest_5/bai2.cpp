#include <bits/stdc++.h>

using namespace std;

int MAX(int x, int y) {
	if (x > y) return x;
	return y;
}

int Tinh(int a[], int f[], int n) {
	int res = 1;
	for (int i = 1 ; i <= n ; i++) {
		f[i] = 1;
		for (int j = 1 ; j < i ; j++) {
			if (a[j] < a[i]) {
				f[i] = MAX(f[i], f[j]+1);
			}
		}
		res = MAX(res, f[i]);
	}
	return res;
}

int main () {
	int n;
	int a[1005];
	int f[1005];
	
	cin >> n;
	for (int i = 1 ; i <= n ; i++) {
		cin >> a[i];
	}
	cout << Tinh(a, f, n);
	return 0;
}
