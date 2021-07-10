#include <bits/stdc++.h>

using namespace std;

void Swap(long &a, long &b) {
	long tmp = a;
	a = b;
	b = tmp;
}

//long partition(long a[], long b[], long l, long h) {
//	long x = a[h];
//	long i = l-1;
//	for (int j = l ; j <= h-1 ; j++) {
//		if (a[j] <= x) {
//			i++;
//			Swap(a[i], a[j]);
//			Swap(b[i], b[j]);
//		}
//	}
//	Swap(a[i+1], a[h]);
//	Swap(b[i+1], b[h]);
//	return i+1;
//}
//
//void QuickSort(long a[], long b[], long l, long h) {
//	if (l < h) {
//		int p = partition(a, b, l, h);
//		QuickSort(a, b, l, p-1);
//		QuickSort(a, b, p+1, h);
//	}
//}

int main() {
	int t;
	long n;
	long a[100005];
	long b[100005];
	long x;
	
	cin >> t;
	while (t--) {
		cin >> n >> x;
		for (int i = 0 ; i < n ; i++) {
			cin >> a[i];
//			b[i] = abs(x-a[i]);
		}
		sort(a, a+n);
		for (int i = 0 ; i < n ; i++) {
			b[i] = abs(x-a[i]);
		}
//		QuickSort(b, a, 0, n-1);
//		

		for (int i = 0 ; i < n-1 ; i++) {
			for (int j = i+1 ; j < n ; j++) {
				if (b[i] > b[j]) {
					Swap(b[i], b[j]);
					Swap(a[i], a[j]);
				}
			}
		}

		for (int i = 0 ; i < n ; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
