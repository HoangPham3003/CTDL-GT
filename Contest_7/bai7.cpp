#include <bits/stdc++.h>

using namespace std;

int Tinh(string s) {
	stack <char> st;
	
	for (int i = 0 ; i < s.length() ; i++) {
		if (s[i] == ')' && !st.empty()) {
			if (st.top() == '(') {
				st.pop();
			}
			else st.push(s[i]);
		}
		else st.push(s[i]);
	}
	
	int len = st.size();
	int n = 0;
	
	while (!st.empty() && st.top() == '(') {
		st.pop();
		n++;
	}
	return (len/2 + n%2);
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
