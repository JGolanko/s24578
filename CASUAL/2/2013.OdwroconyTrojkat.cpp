//ODWROCONY TROJKAT
/*2.0.0.13 Rysowanie figury (odwr�cony tr�jk�t) Wykorzystuj�c dowoln� p�tl� napisz program, kt�ry pobierze z wiersza polece� wymiary �odwr�conego tr�jk�ta� (tj. niech wierzcho�ek b�dzie
na dole, patrz listing 10) i narysuje go. Wynik wydrukuj na std::cout*/
#include <iostream>
using namespace std;

int main()
{
    int h;

    cout << "Podaj wysoko�� tr�jk�ta h ";
    cin >> h;

    for (int i = a; i >= 1; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
    }

    return 0;
