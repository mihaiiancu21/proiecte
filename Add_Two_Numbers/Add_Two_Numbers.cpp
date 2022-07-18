#include <iostream>
using namespace std;

void citireV1(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)       //citire vector 1
	{
		cin >> a[i];
	}
}

void citireV2(int b[], int m)
{
	int i;
	for (i = 0; i < m; i++)   //citire vector 2
	{
		cin >> b[i];
	}
}

void afisare(int a[], int b[], int n, int m)
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}                                    //afisare vectori
	cout << endl;
	for (i = 0; i < m; i++)
	{
		cout << b[i] << " ";
	}
}

void prelucrare(int a[], int b[], int n, int m, int rezultat[])
{
	int i;
	int nr1, r,nr2,cnt,aux;
	nr1 = 0;                    
	nr2 = 0;
	cnt = 0;
	aux = 0;
	for (i = n - 1; i >= 0; i--)
	{
		nr1 = nr1 * 10 + a[i];    //formeaza nr invers din vectorul 1
	}
	
	for (i = m - 1; i >= 0; i--)
	{
		nr2 = nr2 * 10 + b[i];  //formeaza nr invers din vectorul 2
	}
	r = nr1 + nr2;             //calculeaza rezultatul
	aux = r;
	
	while (aux != 0)
	{
		aux = aux / 10;         //pentru a afla cate cifre are numarul
		cnt++;                  //pentru a da marimea vectorului rezultat
	}

	for (i = 0; i < cnt; i++)
	{
		rezultat[i] = r % 10;            //stocam in vector nr ul rezultat invers EX: r=807   vectorul rezultat va fi [7 0 8]
		r = r / 10;
		cout << rezultat[i] << " ";
	}
}


int main()
{
	int a[10], b[10], rezultat[10000], n, m, r;
	cout << "Cate cifre contine primul numar : "; cin >> n;
	cout << endl;
	cout << "Scrieti cifrele : ";
	citireV1(a, n);
	cout << endl;
	cout << "Cate cifre contine al doilea numar : "; cin >> m;
	cout << endl;
	cout << "Scrieti cifrele : ";
	citireV2(b, m);
	cout << endl;
	cout << "Numerele sunt : " << endl;
	afisare(a, b, n, m);
	cout << endl;
	prelucrare(a, b, n, m, rezultat);

}


//Input: l1 = [2, 4, 3], l2 = [5, 6, 4]
//Output : [7, 0, 8]
//Explanation : 342 + 465 = 807.