//PUSTY KWADRAT
/*2.0.0.14 Rysowanie figury (pusty kwadrat) Napisz program, kt�ry pobierze z wiersza polece�
wymiary figury, a potem narysuje �pusty kwardat� (patrz listing 11). Wymiar nie mo�e by� mniejszy
ni� 3. Wynik wydrukuj na std::cout.*/

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Podaj d�ugo�� �cian kwadratu";
	cin >> a;
	cin >> b;

	if (a >= 3 && b >= 3)
	{
		for (int i = a; i > 0; i--)
		{
			if (i == a || i == 1)
			{
				for (int i = b; i > 0; i--)
				{
					cout << "*";
				}
			}
			else
			{
				for (int i = b; i > 0; i--)
				{
					if (i == b || i == 1)
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}
				}
			}
			cout << endl;
		}
	}
	else cout << "Podane liczby s� nieprawid�owe";


	return 0;
}
