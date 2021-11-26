//SILNIA WHILE
/*2.0.0.9 Silnia (while) Wykorzystuj¹c pêtlê while (patrz listing 6) napisz program, który pobierze
od u¿ytkownika liczbê i obliczy jej silniê. Wynik wydrukuj na std::cout.*/
#include<iostream>
using namespace std;

int a;
int b = 1;
int i = 1;
int main()
{
    cout << "Podaj liczbê:";
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