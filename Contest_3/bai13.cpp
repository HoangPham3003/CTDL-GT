#include <bits/stdc++.h>

using namespace std;

int t;
int d;
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

int main () {
	cin >> t;
	while (t--) {
		slgKyTu = 0;
		TanXuat X[10005];
		cin >> d;
		cin.ignore();
		cin >> s;
		TachKyTu(X, slgKyTu);
		bool chk = true;
		for (int i = 1 ; i <= slgKyTu ; i++) {
			if ((X[i].SoLanLap-1)*d > s.length()) chk = false;
		}
		if (chk == true) cout << "1" << endl;
		else cout << "-1" << endl;
	}
	return 0;
}
