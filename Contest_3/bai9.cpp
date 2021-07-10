#include <bits/stdc++.h>

using namespace std;

int t;
int n;
int dem;
int LoiNhuan;

struct CongViec {
	int JobID;
	int DeadLine;
	int Profit;
};

void QuickSort(CongViec X[], int left, int right) {
	int i = left;
	int j = right;
	CongViec tmp;
	int mid = X[(left + right)/2].Profit;
	while (i <= j) {
		while (X[i].Profit > mid) {
			i++;
		}
		while (X[j].Profit < mid) {
			j--;
		}
		if (i <= j) {
			tmp = X[i];
			X[i] = X[j];
			X[j] = tmp;
			i++;
			j--;
		}
	}
	if (left < j) {
		QuickSort(X, left, j);
	}
	if (i < right) {
		QuickSort(X, i , right);
	}
}

int main() {
	cin >> t;
	while (t--) {
		CongViec CV[1005];
		bool checkDL[1005] = {0};
		cin >> n;
		for (int i = 1 ; i <= n ; i++) {
			cin >> CV[i].JobID >> CV[i].DeadLine >> CV[i].Profit;
		}
		
		QuickSort(CV, 1, n);
		
		dem = 0;
		LoiNhuan = 0;
		
		for (int i = 1 ; i <= n ; i++) {
			while (checkDL[CV[i].DeadLine] == 1 && CV[i].DeadLine > 0) CV[i].DeadLine -= 1;
			if (checkDL[CV[i].DeadLine] == 0 && CV[i].DeadLine > 0) {
				checkDL[CV[i].DeadLine] = 1;
				LoiNhuan += CV[i].Profit;
				dem++;
			}
		}
		
		cout << dem << " " << LoiNhuan << endl;
	}
	return 0;
}
