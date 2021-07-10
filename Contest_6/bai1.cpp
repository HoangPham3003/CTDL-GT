#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	int n;
	int a[1005];
	int res[1005];
	
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0 ; i < n ; i++) {
			cin >> a[i];
		}
		sort(a, a+n);
		int x = 0;
		int left = 0;
		int right = n-1;
		while (left <= right) {
			res[x]=a[right];
			res[x+1]=a[left];
			x+=2;
			left++;
			right--;
		}
		
		for (int i = 0 ; i < n ; i++) {
			cout << res[i] << " ";
		}
		cout << endl;
	}	
	return 0;
}
