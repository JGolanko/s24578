//LICZBA PIERWSZA
/*2.0.0.4 Liczba pierwsza Napisz program, kt�ry pobierze od u�ytkownika liczb� i sprawdzi czy
jest ona liczb� pierwsz�. Wynik wydrukuj na std::cout.*/

#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Podaj liczb�: ";
	cin >> a;
	for (int i = 3; i < a; i++)
	{
		if (a % i == 0)
		{
			cout << "Podana liczba nie jest liczb� pierwsz�";
			return 0;
		}
	}
	cout << "Podana liczba jest liczba pierwsza";
	return 0;
}