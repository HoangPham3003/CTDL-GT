#include <bits/stdc++.h>

using namespace std;

void Swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int partition(int a[], int b[], int l, int h) {
	int x = b[h];
	int i = l-1;
	for (int j = l ; j <= h-1 ; j++) {
		if (b[j] >= x) {
			i++;
			Swap(a[i], a[j]);
			Swap(b[i], b[j]);
		}
	}
	Swap(a[i+1], a[h]);
	Swap(b[i+1], b[h]);
	return i+1;
}

void QuickSort(int a[], int b[], int l, int h) {
	if (l < h) {
		int p = partition(a, b, l, h);
		QuickSort(a, b, l, p-1);
		QuickSort(a, b, p+1, h);
	}
}

int main() {
	int t;
	int n;
	int a[10005];
	int b[10005];
	
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0 ; i < n ; i++) {
			cin >> a[i];
		}
		sort(a, a+n);
		for (int i = 0 ; i < n ; i++) {
			b[i] = 0;
			for (int j = 0 ; j < n ; j++) {
				if (a[i] == a[j]) b[i] += 1;
			}
		}
		QuickSort(a, b, 0, n-1);
		
		for (int i = 0 ; i < n ; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
