//SILNIA WHILE
/*2.0.0.9 Silnia (while) Wykorzystuj�c p�tl� while (patrz listing 6) napisz program, kt�ry pobierze
od u�ytkownika liczb� i obliczy jej silni�. Wynik wydrukuj na std::cout.*/
#include<iostream>
using namespace std;

int a;
int b = 1;
int i = 1;
int main()
{
    cout << "Podaj liczb�:";
    cin >> a;
    while (i <= a)
    {
        b = b * i;
        i++;
    }
    cout << "Twoja silnia to:"
    cout << b;
    return 0;
}