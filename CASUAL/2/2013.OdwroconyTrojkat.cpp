//ODWROCONY TROJKAT
/*2.0.0.13 Rysowanie figury (odwrócony trójkąt) Wykorzystując dowolną pętlę napisz program, który pobierze z wiersza poleceń wymiary „odwróconego trójkąta” (tj. niech wierzchołek będzie
na dole, patrz listing 10) i narysuje go. Wynik wydrukuj na std::cout*/
#include <iostream>
using namespace std;

int main()
{
    int h, a;

    cout << "Podaj wysokosc trójkąta: " ;
    cin >> a;

    for (int i = a; i >= 1; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout <<"* ";
        }
cout<<endl;
    }

    return 0;
}
