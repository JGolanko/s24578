//SILNIA DO WHILE
/*2.0.0.10 Silnia (do-while) Wykorzystuj�c p�tl� do-while (patrz listing 7) napisz program, kt�ry
pobierze od u�ytkownika liczb� i obliczy jej silni�. Wynik wydrukuj na std::cout.
*/

#include<iostream>
using namespace std;


int a;
int i = 1;
int b = 1;
int main()
{
    cout << "Podaj liczb�:";
    cin >> a;
    do
    {
        b = b * i;
        i++;
    } while (i <= a);
    cout << "Twoja silnia to: ";
    cout << b;
    return 0;
}