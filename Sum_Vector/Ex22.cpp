#include <iostream>
using namespace std;

int main()
{
	int a[200], b[200], n, s,i;
	cin >> n;
	s = 0;

	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		s = s + a[i];
	}

	for (i = 0; i < n; i++)
	{
		b[i] = s - a[i];
	}

	for (i = 0; i < n; i++)
	{
		cout << b[i] << " ";
	}
}