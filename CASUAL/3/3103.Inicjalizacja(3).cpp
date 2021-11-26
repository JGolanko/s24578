//INICJALIZACJA 3
/*3.1.0.3 Inicjalizacja (3) Napisz program, który zainicjalizuje tablicê A
o rozmiarze 50. Wype³nij tablicê przypadkowymi liczbami w zakresie
od 0 do k.*/
#include <iostream>
using namespace std;
int main()
{
	int tablica[50];
	int k;
	cout << "Podaj liczbe k ";
	cin >> k;
	for (int i = 0; i < 50; i++)
	{
		tabA[i] = { rand() % (k + 1) };
		cout << "tablica[" << i << "] " << tablica[i];
	}
	return 0;
}