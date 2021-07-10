#include <bits/stdc++.h>

using namespace std;

int BinarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2;  
        if (arr[mid] <= x && arr[mid+1] > x) 
            return mid;  
        if (arr[mid] > x) 
            return BinarySearch(arr, l, mid-1, x);  
        return BinarySearch(arr, mid+1 , r, x); 
    } 
} 

int main () {
	int t;
	int n;
	int k;
	int a[100005];
	long long dem;
	
	cin >> t;
	while (t--) {
		cin >> n >> k;
		for (int i = 0 ; i < n ; i++) {
			cin >> a[i];
		}
		sort(a, a+n);
		dem = 0;
		for (int i = 0 ; i < n-1 ; i++) {
			dem = dem + BinarySearch(a, i+1, n-1, k+a[i]-1) - i;
		}
		cout << dem << endl;
	}
	return 0;
}
