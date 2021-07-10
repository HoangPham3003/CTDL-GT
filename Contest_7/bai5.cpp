#include <bits/stdc++.h>

using namespace std;

int st[100005];
int top = 0;

int MAX(int a, int b) {
	if (a > b) return a;
	return b;
}

void push(int n) {
	top += 1;
	st[top] = n;
} 

void pop() {
	if (top > 0) {
		top -= 1;
	}
}

bool empty() {
	if (top > 0) return 0;
	return 1;
}

int Tinh(string s) {
	top = 0;
	push(-1);
	int res = 0;
	for (int i = 0 ; i < s.length() ; i++) {
		char c = s[i];
		if (c == '(') {
			push(i);
		}
		else {
			pop();
			if (!empty()) {
				int len = i - st[top];
				res = MAX(res, len);
			}
			else push(i);
		}
	}
	return res;
}

int main() {
	int t;
	string s;
	cin >> t;
	while (t--) {
		cin >> s;
		cout << Tinh(s) << endl;
	}
	return 0;
}
