#include <bits/stdc++.h>

using namespace std;

int t;
string s;
int slgKyTu;

struct TanXuat {
	char KyTu;
	int SoLanLap;
};

int TimKyTu(TanXuat E[], char r, int n) {
	for (int i = 1 ; i <= n ; i++) {
		if (E[i].KyTu == r) return i;
	}
	return -1;
}

void TachKyTu(TanXuat E[], int &x) {
	for (int i = 0 ; i < s.length() ; i++) {
		int res = TimKyTu(E, s[i], x);
		if (res != -1) {
			E[res].SoLanLap += 1;
		}
		else {
			x += 1;
			E[x].KyTu = s[i];
			E[x].SoLanLap = 1;
		}
	}
}

int TimMaxSoLanLap(TanXuat E[], int n) {
	int MaxSLL = 0;
	for (int i = 1 ; i <= n ; i++) {
		if (E[i].SoLanLap > MaxSLL) MaxSLL = E[i].SoLanLap;
	}
	return MaxSLL;
}

int main () {
	cin >> t;
	while (t--) {
		cin >> s;
		TanXuat X[10005];
		slgKyTu = 0;
		
		TachKyTu(X, slgKyTu);
		int MaxSoLanLap = TimMaxSoLanLap(X, slgKyTu);
		if ((MaxSoLanLap-1)*2 < s.length()) cout << "1" << endl;
		else cout << "-1" << endl;
	}
	return 0;
}
