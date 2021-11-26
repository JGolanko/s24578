//SUMA PODZIELNYCH
/*2.0.0.7 Suma podzielnych Napisz program, który pobierze od u¿ytkownika dwie liczby : limit i
dzielnik.Niech program obliczy sumê wszystkich liczb wiêkszych od zera, ale mniejszych lub równych
limitowi, które s¹ podzielne przez dzielnik.Wynik wydrukuj na std::cout.
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