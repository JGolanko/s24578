//INICJALIZACJA
/*3.1.0.1 Inicjalizacja Napisz program, kt�ry zainicjalizuje zerami
tablic� A o rozmiarze n. Rozmiar tablicy ustala u�ytkownik, jednak
tablica ma by� nie wi�ksza ni� 100 element�w. 
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