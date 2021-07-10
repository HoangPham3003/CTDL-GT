#include <bits/stdc++.h>

using namespace std;

int a[1000005];

void merge(int l, int m, int r) {
	int i;
	int j;
	int k;
	int n1 = m-l+1;
	int n2 = r-m;
	int L[n1];
	int R[n2];
	for (i = 0 ; i < n1 ; i++) {
		L[i] = a[l+i];
	}
	for (j = 0 ; j < n2 ; j++) {
		R[j] = a[m+1+j];
	}
	i = 0; 
	j = 0;
	k = l;
	while (i<n1 && j<n2) {
		if (L[i] <= R[j]) {
			a[k] = L[i];
			i++;
		}
		else {
			a[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1) {
		a[k] = L[i];
		i++;
		k++;
	}
	while (j < n2) {
		a[k] = R[j];
		j++;
		k++;
	}
}

void MergeSort(int l, int r) {
	if (l < r) {
		int m = l+(r-l)/2;
		MergeSort(l, m);
		MergeSort(m+1, r);
		merge(l, m, r);
	}
}

int main() {
	int t;
	int n;
	
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0 ; i < n ; i++) {
			cin >> a[i];
		}
		MergeSort(0, n-1);
		for (int i = 0 ; i < n ; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
