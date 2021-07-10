#include <bits/stdc++.h>

using namespace std;

long a[1000005];

int BinarySearch(long value, long left, long right) {
	while (left <= right) {
		long mid = (left+right)/2;
		if (a[mid] == value) return mid;
		else if (a[mid] > value) right = mid-1;
		else left = mid+1; 
	}
	return -1;
}

int main () {
	int t;
	long n, x;
	
	cin >> t;
	while (t--) {
		cin >> n >> x;
		for (long i = 0 ; i < n ; i++) {
			cin >> a[i];
		}
		sort(a, a+n);
		if (BinarySearch(x, 0, n-1) != -1) cout << "1" << endl;
		else cout << "-1" << endl;
	}	
	return 0;
}
