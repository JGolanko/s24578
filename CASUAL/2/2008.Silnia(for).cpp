//SILNIA FOR
/*2.0.0.8 Silnia (for) Wykorzystuj�c p�tl� for (patrz listing 5) napisz program, kt�ry pobierze od
u�ytkownika liczb� i obliczy jej silni�. Wynik wydrukuj na std::cout.*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;
    if (n > 1)
    {
        for (int i = n; i > 1; i--)
        {
            n = n * (i - 1);
        }

    }
    cout << "Twoja silnia to: ";
    cout << n;
    return 0;
}