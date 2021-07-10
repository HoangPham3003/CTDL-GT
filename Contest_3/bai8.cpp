#include <bits/stdc++.h>

using namespace std;

int t;
int finish[1005];
int start[1005];
int n;

void Swap(int &x, int &y)
{
	int tmp = x;
	x = y;
	y = tmp;
}

int Partition(int a[], int b[], int l, int h)
{
	int x = a[h];
	int i = l-1;
	for (int j = l ; j <= h-1 ; j++)
	{
		if (a[j] < x)
		{
			i++;
			Swap(a[i], a[j]);
			Swap(b[i], b[j]);
		}
	}
	Swap(a[i+1], a[h]);
	Swap(b[i+1], b[h]);
	return i+1;
}

void QuickSort(int a[], int b[], int l, int h)
{
	if (l < h)
	{
		int p = Partition(a, b, l, h);
		QuickSort(a, b, l, p-1);
		QuickSort(a, b, p+1, h);
	}
}

void Solve()
{
	int i = 0;
	int dem = 1;
	for (int j = 1 ; j < n ; j++)
	{
		if (finish[i] <= start[j])
		{
			dem++;
			i = j;
		}
	}
	cout << dem << endl;
}

int main ()
{
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 0 ; i < n ; i++)
		{
			cin >> start[i];
		}
		
		for (int i = 0 ; i < n ; i++)
		{
			cin >> finish[i];
		}
		QuickSort(finish, start, 0, n-1);
		
	
		Solve();
	}
	return 0;
}
