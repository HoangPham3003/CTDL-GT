#include <bits/stdc++.h>

using namespace std;

typedef struct {
	int DinhDau;
	int DinhCuoi;
	int TrongSo;
} Edge;

Edge E[100];


int v, e;
vector <int> vt[1005];
int T[1005][2];
int SoCanh;
int d = 0;
bool CheckDinh[1005];
bool CheckDSC[1005];


void Xuat() {
	for (int i = 1 ; i <= SoCanh ; i++) {
		cout << T[i][1] << " " << T[i][2] << endl;
	}
}

void SapXep() {
	int key = 0;
	for (int i = 1 ; i <= e-1 ; i++) {
		key = i;
		for (int j = i+1 ; j <= e ; j++) {
			if(E[i].TrongSo > E[j].TrongSo) {
				key = j;
			}
			if (E[i].TrongSo == E[j].TrongSo && E[i].DinhDau == E[j].DinhDau && E[i].DinhCuoi > E[j].DinhCuoi) {
				Edge tmp = E[i];
				E[i] = E[j];
				E[j] = tmp;
			}
		}
		Edge tmp = E[i];
		E[i] = E[key];
		E[key] = tmp;
	}
}

void KrusKal() {
	bool stop = true;
	while (SoCanh < v-1) {
		stop = true;
		int idx = 0;
		for (int i = 1 ; i <= e ; i++) {
			if (CheckDSC[i] == true) {
				idx = i;
				stop = false;
				break;
			}
		}
		
		if (stop == false) {
			Edge P = E[idx];
			CheckDSC[idx] = false;
			if ((CheckDinh[P.DinhDau] == true && CheckDinh[P.DinhCuoi] == false) || (CheckDinh[P.DinhDau] == false && CheckDinh[P.DinhCuoi] == true) || (CheckDinh[P.DinhDau] == true && CheckDinh[P.DinhCuoi] == true)) {
				SoCanh += 1;
				T[SoCanh][1] = P.DinhDau;
				T[SoCanh][2] = P.DinhCuoi;
				d = d + P.TrongSo;
				CheckDinh[P.DinhDau] = false;
				CheckDinh[P.DinhCuoi] = false;
			}
		}
		else break;
	}
}

void Solve() {
	for (int i = 1 ; i <= 1005 ; i++) {
		vt[i].clear();
	}
	memset(CheckDinh, true, sizeof(CheckDinh));
	memset(CheckDSC, true, sizeof(CheckDSC));
	SoCanh = 0;
	d = 0;
	
	cin >> v >> e;
	
	int a, b, c;
	for (int i = 1 ; i <= e ; i++) {
		cin >> a >> b >> c;
		E[i].DinhDau = a;
		E[i].DinhCuoi = b;
		E[i].TrongSo = c;
	}
	
	SapXep();
	KrusKal();
	cout << d << endl;
}


int main() {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}
