//LISTA LICZB
/*
2.0.0.1 Lista liczb Napisz program, który pobierze od u¿ytkownika dwie liczby (a i b), a nastêpnie
wydrukuje listê liczb wiêkszych lub równych a i mniejszych od b. Wynik wydrukuj na std::cout

*/

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Podaj pierwsz¹ z liczb";
	cin >> a;
	cout << "Podaj drug¹ z liczb";
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