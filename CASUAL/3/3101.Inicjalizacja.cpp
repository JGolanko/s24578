//INICJALIZACJA
/*3.1.0.1 Inicjalizacja Napisz program, który zainicjalizuje zerami
tablicê A o rozmiarze n. Rozmiar tablicy ustala u¿ytkownik, jednak
tablica ma byæ nie wiêksza ni¿ 100 elementów. 
*/

#include <iostream>
using namespace std;

int main()
{
	const int max = 100;
	int tablica[max] = {};
	int n;
	cout << "podaj n"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << tablica[i];
	}
	return 0;
}