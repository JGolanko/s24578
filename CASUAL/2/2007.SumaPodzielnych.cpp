//SUMA PODZIELNYCH
/*2.0.0.7 Suma podzielnych Napisz program, kt�ry pobierze od u�ytkownika dwie liczby : limit i
dzielnik.Niech program obliczy sum� wszystkich liczb wi�kszych od zera, ale mniejszych lub r�wnych
limitowi, kt�re s� podzielne przez dzielnik.Wynik wydrukuj na std::cout.
for (auto i = 0; i < 42; ++i) {
	// do something
}
*/

#include <iostream>
using namespace std;

int lim, dziel;
int a = 0;
int main()
{
	cin >> lim >> dziel;
	for (int i = 1; i <= lim; i++)
	{
		if (i % dziel == 0)
		{
			a = a + i;
		}
	}
	cout << a;
	return 0;
}