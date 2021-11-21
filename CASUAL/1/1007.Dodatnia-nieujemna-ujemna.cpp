//	DODATNIA-NIEUJEMNA-UJEMNA
/*1.0.0.7 Dodatnia-nieujemna-ujemna Napisz program, który pobierze od użytkownika liczbę i
poda następujący wynik:
1. 1 jeśli liczba jest dodatnia
2. 0 jeśli liczba jest zerem
3. -1 jeśli liczba jest ujemna
Wynik wydrukuj na std::cout.
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a > 0)
	{
		cout << "1 ";
	}
	if (a == 0)
	{
		cout << "0 ";
	}
	if (a < 0)
	{
		cout << "-1 ";
	}


	if (b > 0)
	{
		cout << "1 ";
	}
	if (b == 0)
	{
		cout << "0 ";
	}
	if (b < 0)
	{
		cout << "-1 ";
	}


	if (c > 0)
	{
		cout << "1 ";
	}
	if (c == 0)
	{
		cout << "0 ";
	}
	if (c < 0)
	{
		cout << "-1 ";
	}
	return 0;
}