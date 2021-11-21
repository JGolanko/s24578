//DODAWANIE
/*1.0.0.2 Dodawanie Wykorzystując funkcję z listingu 2 napisz program, który pobierze od użytkownika dwie liczby i doda je do siebie. 
Wynik wydrukuj na std::cout
*/

#include <iostream> // for std :: cout , std :: cerr , and std :: cin

using namespace std;

int main()
{
	int a, b, c;
	cout << "Podaj pierwszą liczbę: ";
	cin >> a;
	cout << "Podaj Drugą liczbę: ";
	cin >> b;
	c = a + b;
	cout << "Suma podanych liczb wynosi: ";
	cout << c;
	return 0;

}

