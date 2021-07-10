#include <bits/stdc++.h>

using namespace std;

long n;
long long a[10000005];
int chuaxet[15];

int main() {
	int t;
	
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0 ; i < n ; i++) {
			cin >> a[i];
		}
		
		for (int i = 0 ; i < 10 ; i++) {
			chuaxet[i] = 0;
		}
		
		for (int i = 0 ; i < n ; i++) {
			while (a[i] > 0) {
				int r = a[i]%10;
				a[i]/=10;
				if (chuaxet[r] == 0) {
					chuaxet[r] = 1;
				}
			}
		}
		
		for (int i = 0 ; i < 10 ; i++) {
			if (chuaxet[i] == 1) cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}
