// 	RELACJA MIĘDZY LICZBAMI
/*1.0.0.6 Relacja między liczbami Wykorzystując funkcję z listingu 2 napisz program, który pobierze od użytkownika dwie liczby i wydrukuje relację między nimi tak jak na listingu 3. Wynik
wydrukuj na std::cout.
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	if (a == b)
	{
		cout << a;
		cout << " równe ";
		cout << b;
	}
	if(a>b)
	{
		cout << a;
		cout << " większa ";
		cout << b;
	}
	if(a<b)
	{
		cout << a;
		cout << " mniejsza ";
		cout << b;
	}

	return 0;
}