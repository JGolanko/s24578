//FUNCTION XY
/*3.2.0.6 FunctionXY Napisz funkcjê, która przyjmuje dwa parametry a i b, typu int.
Pierwszy z nich zwiêksza dwukrotnie, a do drugiego dodaje 100. Wyœwietl wynik
dzia³añ. Przetestuj jej dzia³anie w funkcji main.
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
	cout << "Podaj liczbê a: ";
	cin >> a;
	cout << "Podaj liczbê b: ";
	cin >> b;
	parametr(a, b);
	return 0;
}