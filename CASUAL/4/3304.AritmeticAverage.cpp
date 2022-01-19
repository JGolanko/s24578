
/*3.3.0.4 ArithmeticAverage Napisz program, który
zainicjalizuje tablicę A i pozwoli użytkownikowi wypełnić ją
dowolną ilością liczb. Następnie program obliczy średnią
arytmetyczną podanych liczb i wyświetli ją użytkownikowi.*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	int liczba[100000];
	cout << "Ilosc elentow tablicy A: ";
	cin >> n;

	float srednia = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "]:";
		cin >> liczba[i];
		srednia = srednia + liczba[i];
	}
	srednia = srednia / n;
	cout << "Twoja srednia wynosi: " << srednia << endl;

	return 0;
}

