#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	int n;
	int a[1005];
	long res;
	
	cin >> t;
	while (t--) {
		res = 0;
		cin >> n;
		for (int i = 0 ; i < n ; i++) {
			cin >> a[i];
		}
		
		res = abs(a[0]+a[1]);
		
		for (int i = 0 ; i < n-1 ; i++) {
			for (int j = i+1 ; j < n ; j++) {
				long sum = abs(a[i] + a[j]);
				if (sum < abs(res)) res = a[i] + a[j];				
			}
		}
		
		cout << res << endl;
	}
	return 0;
}
