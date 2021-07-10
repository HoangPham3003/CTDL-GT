#include <bits/stdc++.h>

using namespace std;

void Swap(int &x, int &y) {
	int tmp = x;
	x = y;
	y = tmp;
}

int main () {
	int n;
	int a[105];
	
	cin >> n;
	for (int i = 0 ; i < n ; i++) {
		cin >> a[i];
	}
	
	int buoc = 0;
	
	for (int i = 0 ; i < n-1 ; i++) {
		for (int j = i+1 ; j < n ; j++) {
			if (a[i] > a[j]) Swap(a[i], a[j]);
		}
		buoc++;
		cout << "Buoc " << buoc << ": ";
		for (int u = 0 ; u < n ; u++) {
			cout << a[u] << " ";
		}
		cout << endl;
	}
	return 0;
}
