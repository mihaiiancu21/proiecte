#include <iostream>
using namespace std;

int main()
{
	int x[10000], y[10000], n, m, i, contor,minim;

	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> x[i];
	}

	cin >> m;
	for (i = 0; i < m; i++)
	{
		cin >> y[i];
	}

	contor = 0;
	minim = 1000000001;  
	
	for (i = 0; i < m; i++)  //verifica care este cel mai mic element din vectorul y
	{
		if (y[i] < minim)
		{
			minim = y[i];
		}
	}

	for (i = 0; i < n; i++) //verifica si afiseaza elementele mai mici decat minimul din y
	{
		if (x[i] < minim)
		{
			cout << x[i] << " ";
			contor++;
		}
	}

	if (contor == 0) // daca contorul ramane 0, inseamna ca nu sunt elemente in vectorul x mai mici decat elementele din y
	{
		cout << "NU EXISTA";
	}
}


