//RELACJA MIÊDZY LICZBAMI 2
/*2.0.0.6 Relacja miêdzy liczbami (2) Rozwiñ program z zadania 1.0.0.6 tak, ¿eby porównywa³
wiêcej liczb naraz, tak jak na listingu 4. Wynik wydrukuj na std::cout*/

#include <iostream>
#include <string>
using namespace std;

string relation(int a, int b)
{
    if (a == b)
    {
        return "==";
    }
    if (a < b)
    {
        return "<";
    }
    if (a > b)
    {
        return ">";
    }
    return "error";
}

string loop(int s)
{
    int a[s];
    for (int i = 0; i < s; i++)
    {
        cout << "podaj wyraz[" << i << "]";
        cin >> a[i];
    }
    for (int i = 0; i < s; i++)
    {
        cout << a[0] << relation(a[0], a[i]) << a[i];
    }
    return " ";
}

int main()
{
    int s;
    cout << "Podaj s: ";
    cin >> s;
    loop(s);
    return