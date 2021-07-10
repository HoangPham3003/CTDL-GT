#include <bits/stdc++.h>

using namespace std;

int KtraDoUuTien(char x) {
	if (x == '*' || x == '/' || x == '%' || x == '^') return 2;
	else if (x == '^') return 3;
	else if (x == '-' || x == '+') return 1;
	return 0;
}

char st[105];
int top = 0;

void push(char x) {
	top += 1;
	st[top] = x;
}

bool empty() {
	if (top > 0) return 0;
	return 1;
}

void pop() {
	if (top > 0) {
		top--;
	}
}

void BienDoi(string s) {
	top = 0;
	for (int i = 0 ; i < s.length() ; i++) {
		if (s[i] != ' ') {
			if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] - '0' >= 0 && s[i] - '0' <= 9)) cout << s[i];
			else if (s[i] == '(') push(s[i]);
			else if (s[i] == ')') {
				while (!empty() && st[top] != '(') {
					cout << st[top];
					pop();
				}
				pop();
			}
			else if (s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-' || s[i] == '%' || s[i] == '^') {
				if (!empty()) {
					char c = st[top];
					while ((c == '*' || c == '/' || c == '+' || c == '-' || c == '%' || s[i] == '^') && !empty()) {
						if (KtraDoUuTien(c) >= KtraDoUuTien(s[i])) {
							cout << c;
							pop();
							c = st[top];
						}
						else break;
					}
				}
				push(s[i]);
			}
		}
	}
	
	while (!empty()) {
		char c = st[top];
		if (c != '(' && c != ')') {
			cout << c;
			pop(); 
		}
		else pop();
	}
}

int main() {
	int t;
	string s;
	cin >> t;
	cin.ignore();
	while (t--) {
		getline(cin, s);
		BienDoi(s);
		cout << endl;
	}
	return 0;
}
