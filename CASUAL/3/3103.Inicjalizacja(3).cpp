//INICJALIZACJA 3
/*3.1.0.3 Inicjalizacja (3) Napisz program, który zainicjalizuje tablicê A
o rozmiarze 50. Wype³nij tablicê przypadkowymi liczbami w zakresie
od 0 do k.*/

#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int k;
    int i;
    int o = 0;
    cout << " Podaj liczbe k: " << endl;
    cin >> k;

    int A[50];
    for (int i = 0; i < 50; i++)
        A[i] = rand() % k + 1;

    for (int i = 0; i < 50; i++)
        cout << A[i] << endl;
    return 0;
}
