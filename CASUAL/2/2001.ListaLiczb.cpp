//LISTA LICZB
/*
2.0.0.1 Lista liczb Napisz program, kt�ry pobierze od u�ytkownika dwie liczby (a i b), a nast�pnie
wydrukuje list� liczb wi�kszych lub r�wnych a i mniejszych od b. Wynik wydrukuj na std::cout

*/

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Podaj pierwsz� z liczb";
	cin >> a;
	cout << "Podaj drug� z liczb";
	cin >> b;
	if (a > b)
	{
		for (int i = a; i < b; i++)
		{
			cout << i << ;
		}
	}
	if (b > a)
	{
		for (int i = b; i < a; i++)
		{
			cout << i << ;
		}
	}
	
	return 0;
}