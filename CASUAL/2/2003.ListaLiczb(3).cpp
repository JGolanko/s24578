//LISTA LICZB (2)
/*
2.0.0.3 Lista liczb (3) Rozwiñ program z zadania 2.0.0.1 tak ¿eby pobiera³ liczbê s i u¿y³ jej jako
kroku pêtli. Upewnij siê, ¿e program dzia³a te¿ dla ujemnej liczby s.
Upewnij siê, ¿e program odrzuci
krok o wartoœci 0. Wynik wydrukuj na std::cout.
*/

#include <iostream>
using namespace std;



int main()
{
	int a, b, c, s;
	cout << "Podaj trzy liczby:"
	cin >> a;
	cin >> b;
	cin >> s;
	c = a;
	while (c >= a && c < b)
	{
		cout << c << endl;
		c = c + s;
	}
	return 0;
}