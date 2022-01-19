//MINIMUM I MAKSIMUM
/*3.1.0.5 Minimum & Maksimum Napisz program, który dla tablicy A o
rozmiarze n, zwróci indeks najmniejszej i indeks największej wartości
w tablicy A.*/

#include <iostream>
#include <string>
using namespace std;


	int main()
{
	int a, najm, najw;
		cout << "Podaj ile chcesz wpisać elementów do tablicy A ";
		cin >> a;

	int const b = 100;
	int A[b] = {};

	for (int i = 0; i < a; i++) {
		cout << "Podaj " << i + 1 << " element tablicy ";
		cin >> A[i];
	}
	int min = 99999, max = -1;
	for (int i = 0; i < a; i++) {
		if (A[i] < min) {
			min = A[i];
			najm = i;
		}
		if (A[i] > max) {
			max = A[i];
			najw = i;
		}
	}

		cout << "indeks najmniejszej liczby: " << najm << "\n";
		cout << "indeks największaej liczby: " << najw << "\n";
		cout << "\n";

	return 0;
} 
