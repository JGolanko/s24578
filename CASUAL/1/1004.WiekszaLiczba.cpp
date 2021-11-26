//		WIĘKSZA LICZBA
/*1.0.0.4 Większa liczba Wykorzystując funkcję z listingu 2 napisz program, który pobierze od
użytkownika dwie liczby i wydrukuje większą z nich. Wynik wydrukuj na std::cout.
*/
# include <iostream> // for std :: cout , std :: cerr , and std :: cin
using namespace std;

int main()
{
	int a, b;
	cout >> "Która z liczb jest większa?"
	cout << "Podaj pierwszą liczbę: ";
	cin >> a;
	cout << "Podaj drugą liczbę: ";
	cin >> b;
	cout << "Większa z liczb to: ";
    if (a > b)
    {
        cout <<a;
    }
    else
    {
        cout <<b;
    }
	
	return 0;

}