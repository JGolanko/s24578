//FUNCTION XY
/*3.2.0.6 FunctionXY Napisz funkcj�, kt�ra przyjmuje dwa parametry a i b, typu int.
Pierwszy z nich zwi�ksza dwukrotnie, a do drugiego dodaje 100. Wy�wietl wynik
dzia�a�. Przetestuj jej dzia�anie w funkcji main.
*/

#include <iostream>
using namespace std;

void parametr(int a, int b)
{
	cout << a * 2;
	cout << b + 100;
}

int main()
{
	int a, b;
	cout << "Podaj liczb� a: ";
	cin >> a;
	cout << "Podaj liczb� b: ";
	cin >> b;
	parametr(a, b);
	return 0;
}