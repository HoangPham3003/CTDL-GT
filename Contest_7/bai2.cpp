#include <bits/stdc++.h>

using namespace std;

int t;
stack <int> st;

int main() {
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		if (s == "PUSH") {
			int n;
			cin >> n;
			st.push(n);
		}
		else if (s == "PRINT") {
			if (st.empty() == 1) cout << "NONE" << endl;
			else {
				int s = st.top();
				cout << s << endl;
			}
		}
		else if (s == "POP") {
			if (!st.empty()) {
				st.pop();
			}
		}
	}
	return 0;
}
