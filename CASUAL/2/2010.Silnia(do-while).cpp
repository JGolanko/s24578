//SILNIA DO WHILE
/*2.0.0.10 Silnia (do-while) Wykorzystuj¹c pêtlê do-while (patrz listing 7) napisz program, który
pobierze od u¿ytkownika liczbê i obliczy jej silniê. Wynik wydrukuj na std::cout.
*/

#include<iostream>
using namespace std;


int a;
int i = 1;
int b = 1;
int main()
{
    cout << "Podaj liczbê:";
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