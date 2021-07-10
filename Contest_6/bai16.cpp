#include <bits/stdc++.h>

using namespace std;

int X[1000005];

void Swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int partition(int a[], int l, int h) {
	int x = a[h];
	int i = l-1;
	for (int j = l ; j <= h-1 ; j++) {
		if (a[j] <= x) {
			i++;
			Swap(a[i], a[j]);
		}
	}
	Swap(a[i+1], a[h]);
	return i+1;
}

void QuickSort(int a[], int l, int h) {
	if (l < h) {
		int p = partition(a, l, h);
		QuickSort(a, l, p-1);
		QuickSort(a, p+1, h);
	}
}

int main() {
	int t;
	int n;
	
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0 ; i < n ; i++) {
			cin >> X[i];
		}
		QuickSort(X, 0, n-1);
		
		for (int i = 0 ; i < n ; i++) {
			cout << X[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
