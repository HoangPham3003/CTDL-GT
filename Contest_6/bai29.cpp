#include <bits/stdc++.h>

using namespace std;

int Ktra(int a[], int n) {
	for (int i = 1 ; i < n ; i++) {
		if (a[i] < a[i-1]) return 0;
	}
	return 1;
}

void Swap(int &x, int &y) {
	int tmp = x;
	x = y;
	y = tmp;
}

int main() {
	int n;
	int a[105];
	
	cin >> n;
	for (int i = 0 ; i < n ; i++) {
		cin >> a[i];
	}
	
	int buoc = 0;
	
	for (int i = 0 ; i < n ; i++) {
		for (int j = 0 ; j < n-i-1 ; j++) {
			if (a[j] > a[j+1]) Swap(a[j], a[j+1]);
		}
		buoc++;
		cout << "Buoc " << buoc << ": ";
		for (int u = 0 ; u < n ; u++) {
			cout << a[u] << " ";
		}
		cout << endl;
		if (Ktra(a, n) == 1) break;
	}
	return 0;
}
