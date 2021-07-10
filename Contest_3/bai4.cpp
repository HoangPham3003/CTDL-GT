#include <bits/stdc++.h>

using namespace std;

int t;
int n;
int a[100];
long long res;
long long num1;
long long num2;


int main ()
{
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 0 ; i < n ; i++)
		{
			cin >> a[i];
		}
		
		sort(a, a+n);
		res = 0;
		num1 = 0;
		num2 = 0;
																								
		for (int i = 0 ; i < n ; i+=2)
		{
			if (a[i] == 0) i += 1;
			num1 = num1*10 + a[i];
			if (i+1 < n) num2 = num2*10 + a[i+1];
		}
		res = num1 + num2;
		cout << res << endl;
	}
	return 0;
}
