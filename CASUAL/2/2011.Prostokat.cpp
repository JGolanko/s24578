//PROSTOK�T
/*2.0.0.11 Rysowanie figury (prostok�t) Wykorzystuj�c dowoln� p�tl� napisz program, kt�ry
pobierze z wiersza polece� wymiary prostok�ta i narysuje go. Wynik wydrukuj na std::cout. Przyk�adowe uruchomienie na listingu 8.*/
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Podaj wysokosc prostakata ";
    cin >> a;
    cout << "Podaj dlugosc prostokata ";
    cin >> b;
    for (int i = a; i > 0; i--)
    {
        for (int i = b; i > 0; i--)
        {
            cout << "*";
        }
    }
    return 0;
}