//LISTA LICZB
/*
2.0.0.2 Lista liczb (2) Rozwiñ program z poprzedniego zadania tak 
¿eby pobiera³ trzeci¹ liczbê
(c) i drukowa³ jedynie liczby podzielne przez c. 
Upewnij siê, ¿e program odrzuci c równe 0. Wynik
wydrukuj na std::cout.
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Podane liczby musz¹ spe³niaæ warunek: a<b oraz c !=0";
	cout << "Podaj pierwsz¹ liczbê (a) :";
	cin >> a;
	cout << "Podaj drug¹ liczbê (b) :";
	cin >> b;
	cout << "Podaj trzeci¹ liczbê (c):";
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
		cout<< "Poda³eœ z³e liczby"
	}

	return 0;
}