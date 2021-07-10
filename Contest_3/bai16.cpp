#include <bits/stdc++.h>

using namespace std;

int t;
int s, d;

int main () {
	cin >> t;
	while (t--) {
		cin >> s >> d;
		int x = d;
		while (s != 0) {
			long gtriMax = 9 * d;
			long PhanDu = gtriMax - s;
			
			if (PhanDu >= s) {
				long r = PhanDu % 9;
				if (r == 0 && d == x) r += 1;
				cout << r;
				s -= r;
				d--;
			}	
			else if (PhanDu < s) {
				long r = PhanDu % 9;
				long Hieu = 9 - r;
				long Thuong = PhanDu/Hieu;
				
				if (Thuong == 0) {
					if (d == 1) {
						long res = s - Thuong;
						cout << res;
						s -= res;
						d--;
					}
					else {
						long res = 9 - Thuong;
						cout << res;
						s -= res;
						d--;
					}
				}
				else {
					if (d == 1) {
						long res = s % Thuong;
						cout << res;
						s -= res;
						d--;
					}
					else {
						if (PhanDu % Hieu == 0) {
							long res = 9 % Thuong;
							cout << res;
							s -= res;
							d--;
						}
						else {
							long res = s % Thuong;
							cout << res;
							s -= res;
							d--;
						}
					}
				}
			}
		}
		cout << endl;
	}
	return 0;
}
