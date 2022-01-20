/*3.4.0.5 CopyTable Zaimplementuj funkcję copyTableToVector(), która kopiuje zawartość dwuwymiarowej
tablicy liczb całkowitych, 100 wierszy na 8 kolumn, do vectora, ale tylko wierszy o numerze
odpowiadającym reszcie z dzielenia nr twojego indeksu przez 3, (jeżeli to zero, weź 5). Zadbaj o zakresy.
Tworzona funkcja zwraca wskaźnik na ostatni element wektora. Wynik wydrukuj na std::cout.*/

#include <iostream>
#include <vector>
using namespace std;

const int column = 8;
const int line = 100;

int tab[line][column];

vector<int>tabV;
int copyTableToVector()
{
	for (int i = 0; i < column; i++)
	{
		for (int j = 0; j < line; j++)
		{
			tab[j][i] = rand() % 100;
			if (j == 5)
			{
				tabV.push_back(tab[j][i]);
			}
		}
	}
	int* last = &tabV[tabV.size() - 1];
	return *last;
}

int main()
{
	cout << "Wskaźnik ostatniego elementu wektora to: " << copyTableToVector() << "\n";

	return 0;
}
