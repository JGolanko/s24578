//LISTA LICZB (2)
/*
2.0.0.3 Lista liczb (3) Rozwi� program z zadania 2.0.0.1 tak �eby pobiera� liczb� s i u�y� jej jako
kroku p�tli. Upewnij si�, �e program dzia�a te� dla ujemnej liczby s.
Upewnij si�, �e program odrzuci
krok o warto�ci 0. Wynik wydrukuj na std::cout.
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