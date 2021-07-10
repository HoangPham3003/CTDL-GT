#include <bits/stdc++.h>

using namespace std;

long MinNum(long a)
{
	long x = a;
	long dem = 1;
	while (x > 0)
	{
		int r = x%10;
		if (r == 6) a -= dem; 
		dem *= 10;
		x/=10;
	}
	return a;
}

long MaxNum(long a)
{
	long x = a;
	long dem = 1;
	while (x > 0)
	{
		int r = x%10;
		if (r == 5) a += dem; 
		dem *= 10;
		x/=10;
	}
	return a;
}

int main ()
{
	long A, B;
	cin >> A >> B;
	cout << MinNum(A)+MinNum(B) << " " << MaxNum(A)+MaxNum(B);
	return 0;
}
