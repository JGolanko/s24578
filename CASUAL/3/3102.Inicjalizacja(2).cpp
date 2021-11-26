//INICJALIZACJA 2
/*
3.1.0.2 Inicjalizacja (2) Napisz program, który zainicjalizuje tablicê A
o rozmiarze n kolejnymi liczbami ca³kowitymi zaczynaj¹c od start.
Przyk³ad: dla tablicy A[4] i start=10 tablica A zawiera³aby liczby 10, 11, 12, i 13.*/
#include <iostream>
using namespace std;
int main()
{
	int tablica[100];
	int n, start;
	cin >> n;
	cin >> start;
	for (int i = start; i < n + start; i++)
	{
		tablica[i] = i;
		cout << i;
	}

	return 0;
}