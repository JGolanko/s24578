/*3.4.0.1 PointerStart Napisz program, który dla zmiennej typu string przechowującej twoje imię i
nazwisko, stworzy wskaźnik. Przy pomocy wskaźnika wskazującego na tą zmienną, wypisze: wartość
zmiennej, adres zmiennej, rozmiar zmiennej. Następnie, wypisz wartość wskaźnika, adres wskaźnika,
rozmiar wskaźnika.*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string name = "Julia Golanko";
	string* a = &name;
	cout << "wartość zmiennej name: " << *a << "\n";
	cout << "adres zmiennej name: " << a << "\n";
	cout << "rozmiar zmiennej name: " << sizeof(*a) << "\n\n";
	cout << "wartość wskaźnika: " << a << "\n";
	cout << "adres wskaźnika: " << &a << "\n";
	cout << "rozmiar wskaźnika: " << sizeof(a) << "\n";


	return 0;
}
