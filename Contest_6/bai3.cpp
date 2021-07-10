#include <bits/stdc++.h>

using namespace std;

void Swap(int &x, int &y) {
	int tmp = x;
	x = y;
	y = tmp;
}

long long SelectionSort(int a[], int n) {
	int minIdx = 0;
	long long dem = 0;
	for (int i = 0 ; i < n-1 ; i++) {
		minIdx = i;
		int chk = 1;
		for (int j = i+1 ; j < n ; j++) {
			if (a[j] < a[minIdx]) {
				minIdx = j;
				chk = 0;
			}
		}
		Swap(a[minIdx], a[i]);
		if (chk == 0) dem++;
	}
	return dem;
}

int main () {
	int t;
	int n;
	int a[1005];
	
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0 ; i < n ; i++) {
			cin >> a[i];
		}	
		cout << SelectionSort(a, n) << endl; 
	}
	return 0;
}
