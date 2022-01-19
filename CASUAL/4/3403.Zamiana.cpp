/*3.4.0.3 Zamiana Napisz funkcję swap(), która będzie jako parametr przyjmować dwa wskaźniki na int i
zamienia miejscami wartości zmiennych, na które te wskaźniki wskazują. W funkcji main() napisz kod,
który wywołuje funkcję swap(). Wydrukuj wartość dwóch testowych liczb przed i po zamianie.*/

#include <iostream>
using namespace std;

int number_a = 55;
int number_b = 89;
int* a = &number_a;
int* b = &number_b;

void swap(int a, int b)
{
	int c = b;
	b = a;
	a = c;
	cout << "\n" << "liczba a:" << a << "\n" << "liczba b:" << b << "\n";
}

int main()
{
	cout << "przed zmianą:" << "\n";
	cout << "liczba a:" << *a << "\n";
	cout << "liczba b:" << *b << "\n";
	cout << "po zmianie:";
	swap(*a, *b);
	return 0;
}
