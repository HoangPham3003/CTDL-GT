#include <bits/stdc++.h>

using namespace std;

int q[100005];
int top = 0;

int isEmpty() {
	if (top > 0) return 0;
	return 1;
}

void push_back(int n) {
	top += 1;
	q[top] = n;
}

void push_front(int n) {
	if (top == 0) {
		top += 1;
		q[top] = n;
	}
	else {
		top += 1;
		for (int i = top ; i >= 2 ; i--) {
			q[i] = q[i-1];
		}
		q[1] = n;
	}
}

void pop_back() {
	if (top > 0) {
		top -= 1;
	}
}

void pop_front() {
	if (top > 0) {
		for (int i = 1 ; i < top ; i++) {
			q[i] = q[i+1];
		}
		top--;
	}
}

void ChuongTrinh() {
	top = 0;
	int Q;
	string s;
	cin >> Q;
	while (Q--) {
		cin >> s;
		if (s == "PUSHBACK") {
			int n;
			cin >> n;
			push_back(n);
		}
		else if (s == "PUSHFRONT") {
			int n;
			cin >> n;
			push_front(n);
		}
		else if (s == "POPBACK") {
			pop_back();
		}
		else if (s == "POPFRONT") {
			pop_front();
		}
		else if (s == "PRINTBACK") {
			if (isEmpty()) cout << "NONE" << endl;
			else cout << q[top] << endl;
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
