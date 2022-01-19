/*3.4.0.2 Dereferencja Napisz funkcję print(), która będzie jako parametr przyjmować wskaźnik na
std::string. W funkcji print() wydrukuj adres, na który wskazuje wskaźnik oraz napis stojący za tym
wskaźnikiem, np. „1781f89a980 = Hello, World!”. W funkcji main() napisz kod, który wywołuje funkcję
print(). Wynik wydrukuj na std::cout. */

#include <iostream>
#include <string>
using namespace std;

void print(std string* a) {
	cout << a << " = " << *a << "\n";
}
int main() {
	string hello = "Hello, World!";
	string* a = &hello;
	print(a);
	return 0;
}
