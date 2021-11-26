//SILNIA FOR
/*2.0.0.8 Silnia (for) Wykorzystuj¹c pêtlê for (patrz listing 5) napisz program, który pobierze od
u¿ytkownika liczbê i obliczy jej silniê. Wynik wydrukuj na std::cout.*/
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