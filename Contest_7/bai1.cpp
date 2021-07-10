#include <bits/stdc++.h>

using namespace std;

int q[205];
int top = 0;

void push(int n) {
	top += 1;
	q[top] = n;
}

void pop() {
	if (top > 0) {
		top--;
	}
}

void show() {
	if (top > 0) {
		for (int i = 1 ; i <= top ; i++) {
			cout << q[i] << " ";
		}
		cout << endl;
	}
	else cout << "empty" << endl;
}

int main() {
	int c;
	string s;
	while (cin >> s) {
		if (s == "push") {
			int n;
			cin >> n;
			push(n);
		}
		else if (s == "pop") {
			pop();
		}
		else if (s == "show") {
			show();
		}
	}
	return 0;
}
