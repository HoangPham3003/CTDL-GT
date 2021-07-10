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
		string s;
		cin >> s;
		if (s == "PUSH") {
			int u;
			cin >> u;
			push(u);
		}
		else if (s == "POP") {
			pop();
		}
		else if (s == "PRINTFRONT") {
			if (isEmpty()) cout << "NONE" << endl;
			else cout << q[1] << endl;
		}
	}
}

int main() {
	ChuongTrinh();
	return 0;
}
