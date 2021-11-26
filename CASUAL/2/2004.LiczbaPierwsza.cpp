//LICZBA PIERWSZA
/*2.0.0.4 Liczba pierwsza Napisz program, który pobierze od u¿ytkownika liczbê i sprawdzi czy
jest ona liczb¹ pierwsz¹. Wynik wydrukuj na std::cout.*/

#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Podaj liczbê: ";
	cin >> a;
	for (int i = 3; i < a; i++)
	{
		if (a % i == 0)
		{
			cout << "Podana liczba nie jest liczb¹ pierwsz¹";
			return 0;
		}
	}
	cout << "Podana liczba jest liczba pierwsza";
	return 0;
}