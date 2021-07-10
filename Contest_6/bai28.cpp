#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	int a[105];
	
	cin >> n;
	for (int i = 0 ; i < n ; i++) {
		cin >> a[i];
	}
	
	int buoc = 0;
	
	for (int i = 0 ; i < n ; i++) {
		int key = a[i];
		int j = i-1;
		while (j >= 0 && a[j] > key) {
			a[j+1] = a[j];
			j -= 1;
		}
		a[j+1] = key;
		
		cout << "Buoc " << buoc << ": ";
		for (int u = 0 ; u <= i ; u++) {
			cout << a[u] << " ";
		}
		cout << endl;
		buoc++;
	}
	return 0;
}
