//ODWROCONY TROJKAT
/*2.0.0.13 Rysowanie figury (odwrócony trójk¹t) Wykorzystuj¹c dowoln¹ pêtlê napisz program, który pobierze z wiersza poleceñ wymiary „odwróconego trójk¹ta” (tj. niech wierzcho³ek bêdzie
na dole, patrz listing 10) i narysuje go. Wynik wydrukuj na std::cout*/
#include <iostream>
using namespace std;

int main()
{
    int h;

    cout << "Podaj wysokoœæ trójk¹ta h ";
    cin >> h;

    for (int i = a; i >= 1; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
    }

    return 0;
