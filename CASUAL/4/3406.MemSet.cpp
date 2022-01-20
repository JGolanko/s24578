
/*3.4.0.6 MemSet Napisz funkcję, która demonstruje działanie funkcji memset(3) na tablicy char. Jej opis
znajduje się w podręczniku użytkownika systemu. Można go wyświetlić używając polecenia ‘man 3
memset’. Jak dostać się do pojedynczych bajtów w obszarze pamięci pokazuje listing 17 (00-exercises-cxx.pdf).*/


#include <iostream>
#include <cstring>
using namespace std;

void memset(char a[], char b, int c)
{
	for (int i = 0; i < c; i++)
		a[i] = b;
}

int main()
{
	char b;
	int c;
	char tab[100];
	b = getchar();
	cin >> c;
	memset(tab, b, c);
	for (int i = 0; i < c; i++)
	cout << tab[i] << '\n';

	return 0;
}
