//SUMA LICZB PIERWSZYCH
/*2.0.0.5 Suma liczb pierwszych Napisz program, kt�ry pobierze od u�ytkownika liczb� i sprawdzi
czy jest ona liczb� pierwsz�. Je�li tak, to niech poda sum� liczb pierwszych mniejszych lub r�wnych
podanej liczbie. Wynik wydrukuj na std::cout.
./ program 2 2 0 3 8 -1
2 == 2
2 > 3
2 < 3
2 < 8
2 > -1
*/

#include <iostream>
using namespace std;
bool pierwsza(int a)
{
	if (a == 2 || a == 3 || a == 5 || a == 7)
	{
		return true;
	}
	else if (a == 0 || a == 1 || a % 2 == 0 || a % 3 == 0 || a % 5 == 0 || a % 7 == 0)
	{

		return false;
	}
	else
	{
		return true;
	}
}

int suma_liczb(int a)
{
	int b = a;
	int suma = 0;
	if (pierwsza(a) == true)
	{
		cout << "Podana liczba jest liczb� pierwsz� ";
		while (b >= 2)
		{
			if (pierwsza(b) == true)
			{
				suma = suma + b;
			}
			b--;
		}
	}
	else
	{
		cout << "Podana liczba nie jest liczba pierwsza";
	}
	return suma;
}

int main()
{
	int a;
	cout << "Podaj liczbe: ";
	cin >> a;
	cout << "Suma liczb pierwszych mniejszych lub rownych wynosi: " << suma_liczb(a) <<;
	return 0;
}