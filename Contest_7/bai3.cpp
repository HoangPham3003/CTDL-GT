#include <bits/stdc++.h>

using namespace std;

stack <char> st;

int main() {
	int t;
	string s;
	cin >> t;
	cin.ignore();
	while (t--) {
		getline(cin, s);
		for (int i = 0 ; i <= s.length() ; i++) {
			if (s[i] != ' ' && s[i] != '\0') st.push(s[i]);
			else if (s[i] == ' ' || i == s.length()){
				while (!st.empty()) {
					char c = st.top();
					st.pop();
					cout << c;
				}
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
