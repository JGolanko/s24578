//	MNOZENIE
/*1.0.0.3 Mnożenie Wykorzystując funkcję z listingu 2 napisz program, który pobierze od użytkownika dwie liczby i pomnoży je przez siebie. Wynik wydrukuj na std::cout.
*/
# include <iostream> // for std :: cout , std :: cerr , and std :: cin
using namespace std;

int main()
{
	int a, b, c;
	cout << "Podaj pierwszą liczbę: ";
	cin >> a;
	cout << "Podaj drugą liczbę: ";
	cin >> b;
	c = a * b;
	cout << "Iloczyn dwóch podanych liczb wynosi: ";
	cout << c;
	return 0;

}
