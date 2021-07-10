#include <bits/stdc++.h>

using namespace std;

void BienDoi(string s, int &x, string &res) {
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
		if (s[i] != '(' && s[i] != ')') {
			res[x] = s[i];
			x++;
		}
	}
	res[x] = '\0';
}

int main() {
	int t;
	bool check;
	string s1;
	string s2;
	string res1, res2;
	int x1, x2;
	cin >> t;
	while (t--) {
		check = true;
		x1 = 0;
		x2 = 0;
		cin >> s1 >> s2;
		BienDoi(s1, x1, res1);
		BienDoi(s2, x2, res2);
		for (int i = 0 ; i < x1 ; i++) {
			if (res1[i] != res2[i]) {
				check = false;
				break;
			}
		}
		if (check == true) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
