#include <bits/stdc++.h>

using namespace std;

void Swap(int &x, int &y) {
	int tmp = x;
	x = y;
	y = tmp;
}

int main() {
	int n;
	int a[105];
	
	cin >> n;
	for (int i = 0 ; i < n ; i++) {
		cin >> a[i];
	}
	
	int minIdx;
	int buoc = 0;
	
	for (int i = 0 ; i < n-1 ; i++) {
		minIdx = i;
		for (int j = i+1 ; j < n ; j++) {
			if (a[j] < a[minIdx]) minIdx = j;
		}
		Swap(a[minIdx], a[i]);
		
		buoc++;
		cout << "Buoc " << buoc << ": ";
		for (int u = 0 ; u < n ; u++) {
			cout << a[u] << " ";
		}
		cout << endl;
	}
	return 0;
}
