#include <bits/stdc++.h>

using namespace std;

char st[100005];
int top = 0;

void push(char c) {
	top += 1;
	st[top] = c;
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

bool Ktra(string s) {
	top = 0;
	for (int i = 0 ; i < s.length() ; i++) {
		char c = s[i];
		if (c == '(' || c == '[' || c == '{') {
			push(c);
		}
		else if (c == ')') {
			char t = st[top];
			if (t != '(') {
				return 0;
			}
			else {
				if (!empty()) pop();
			}
		}
		else if (c == ']') {
			char t = st[top];
			if (t != '[') {
				return 0;
			}
			else {
				if (!empty()) pop();
			}
		}
		else if (c == '}') {
			char t = st[top];
			if (t != '{') {
				return 0;
			}
			else {
				if (!empty()) pop();
			}
		}
	}
	if (!empty()) return 0;
	return 1;
}

int main() {
	int t;
	string s;
	cin >> t;
	while (t--) {
		cin >> s;
		if (Ktra(s) == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
