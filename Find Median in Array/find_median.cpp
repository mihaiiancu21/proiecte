// Ex13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void citireVector(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "Elementul de pe pozitia " << i << " :"; cin >> a[i];
    }
}

void sortare(int a[], int n)
{
	int aux;
	int ok;
	do {
		ok = 1;
		for (int i = 0; i < n - 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				aux = a[i];
				a[i] = a[i + 1];
				a[i + 1] = aux;
				ok = 0;
			}
		}
	} while (ok != 1);
}

void mediana(int a[], int n)
{
	int i;
	int mediana,diferenta;
	mediana = 0;
	diferenta = 0;
	for (i = 0; i < n; i++)
	{
		if (n % 2 == 1)
		{
			mediana = a[n / 2];
			
		}
		if (n % 2 == 0)
		{
			mediana =( a[n / 2] + a[(n - 1) / 2])/2;
			//diferenta = diferenta / 2;
			//mediana = a[n / 2] - diferenta;
		}
			
	}

	cout << "Mediana este: " << mediana;
}

void afisare(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}


int main()
{
    int a[100], n,m;
	cout << "Cate elemente sa contina vectorul :"; cin >> n;
	citireVector(a, n);
	sortare(a, n);
	afisare(a, n);
	cout << endl;
	mediana(a, n);
}
