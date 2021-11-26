// 	WARTOSC ABSOLUTNA
/*1.0.0.5 Wartość absolutna Napisz program, który pobierze od użytkownika liczbę i poda jej
wartość absolutną. Wynik wydrukuj na std::cout.
./ program 2 2
2 == 2
./ program 0 3
0 < 3
./ program 1 -1
1 > -1
*/

#include

using namespace std;

int main()

{
	int a;
	cout << "Wartość Absolutna : ";
	cout, , "Podaj liczbę:"
		cin >> a;
	cout << "Wartość absolutna z podanej liczby to:"
		if (a >= 0)
		{
			cout << a;
		}
		else
		{
			cout << a * -1;

		}
	return 0;
}