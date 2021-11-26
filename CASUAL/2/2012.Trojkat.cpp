//TROJKAT
/*2.0.0.12 Rysowanie figury (trójk¹t) Wykorzystuj¹c dowoln¹ pêtlê napisz program, który pobierze z wiersza poleceñ wymiary trójk¹ta i narysuje go. Wynik wydrukuj na std::cout. Przyk³adowe
uruchomienie na listingu 9.*/

#include <iostream>
#include <string>
using namespace std;

int main()
{

    int h;
    cout << "Podaj wysokoœæ trójk¹ta h ";
    cin >> a;

    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

    return 0;
}