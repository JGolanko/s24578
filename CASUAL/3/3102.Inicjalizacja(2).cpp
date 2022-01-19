//INICJALIZACJA 2
/*
3.1.0.2 Inicjalizacja (2) Napisz program, który zainicjalizuje tablicê A
o rozmiarze n kolejnymi liczbami ca³kowitymi zaczynaj¹c od start.
Przyk³ad: dla tablicy A[4] i start=10 tablica A zawiera³aby liczby 10, 11, 12, i 13.*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    int start;
    cout << "podaj rozmiar tablicy: ";
    cin >> n;
    cout << "Podaj liczbe startowa: ";
    cin >> start;

    if (n > 100) {
        cout << "Liczba za duza" << endl;
        return 0;
    }
    vector <int> A;
    for (int i = 0; i < n; i++)
    {
        A.push_back(start);
        start = start + 1;
    }
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << endl;
    }

    return 0;
}
