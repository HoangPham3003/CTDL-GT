#include <bits/stdc++.h>

using namespace std;

int q[1005];
int top = 0;

int isEmpty() {
	if (top > 0) return 0;
	return 1;
}

void pop() {
	if (top > 0) {
		for (int i = 1 ; i < top ; i++) {
			q[i] = q[i+1];
		}
		top--;
	}
}

void push(int n) {
	top += 1;
	q[top] = n;
}

int size() {
	return top;
}

void ChuongTrinh() {
	int n;
	cin >> n;
	
	top = 0;
	while (n--) {
		int x;
		cin >> x;
		switch(x) {
			case 1:
				cout << size() << endl;
				break;
			case 2:
				if (isEmpty()) cout << "YES" << endl;
				else cout << "NO" << endl;
				break;
			case 3:
				int u;
				cin >> u;
				push(u);
				break;
			case 4:
				pop();
				break;
			case 5:
				if (isEmpty()) cout << "-1" << endl;
				else cout << q[1] << endl;
				break;
			case 6:
				if (isEmpty()) cout << "-1" << endl;
				else cout << q[top] << endl;
				break;
		}
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		ChuongTrinh();
	}
	return 0;
}
