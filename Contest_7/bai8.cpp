#include <bits/stdc++.h>

using namespace std;

void BienDoi(string s) {
	int len = s.length();
	
	stack <int> st;
	
	for (int i = 0 ; i < len ; i++) {
		if (s[i] == '(') st.push(i);
		else if (s[i] == ')' && !st.empty()) {
			int idx = st.top();
			if (s[idx-1] == '-') {
				for (int j = idx ; j <= i ; j++) {
					if (s[j] == '-') s[j] = '+';
					else if (s[j] == '+') s[j] = '-';
				}
			}
			st.pop();
		}
	}
	for (int i = 0 ; i < len ; i++) {
		if (s[i] != '(' && s[i] != ')') cout << s[i];
	}
	cout << endl;
}

int main() {
	int t;
	string s;
	cin >> t;
	while (t--) {
		cin >> s;
		BienDoi(s);
	}
	return 0;
}
