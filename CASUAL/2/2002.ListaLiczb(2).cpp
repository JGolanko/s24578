//LISTA LICZB
/*
2.0.0.2 Lista liczb (2) Rozwi� program z poprzedniego zadania tak 
�eby pobiera� trzeci� liczb�
(c) i drukowa� jedynie liczby podzielne przez c. 
Upewnij si�, �e program odrzuci c r�wne 0. Wynik
wydrukuj na std::cout.
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Podane liczby musz� spe�nia� warunek: a<b oraz c !=0";
	cout << "Podaj pierwsz� liczb� (a) :";
	cin >> a;
	cout << "Podaj drug� liczb� (b) :";
	cin >> b;
	cout << "Podaj trzeci� liczb� (c):";
	cin >> c;

	if (c != 0)
	{

		for (a; a < b; a++)
		{
			if (a % c == 0)
			{
				cout << a;
			}
		}

	}

	else
	{
		cout<< "Poda�e� z�e liczby"
	}

	return 0;
}