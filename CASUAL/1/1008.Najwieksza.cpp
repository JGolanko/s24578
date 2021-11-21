//	NAJWIEKSZA
/*1.0.0.8 Największa Napisz program, który pobierze od użytkownika trzy liczby i wydrukuje największą. Wynik wydrukuj na std::cout.
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if ((a > b) && (a > c))
	{
		cout << a;
	}

	if ((b > a ) && (b > c))
	{
		cout << b;
	}

	if ((c > a) && (c > b))
	{
		cout << c;
	}

	return 0;
}