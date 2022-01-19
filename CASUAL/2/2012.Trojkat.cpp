//TROJKAT
/*2.0.0.12 Rysowanie figury (trójkąt) Wykorzystując dowolną pętlę napisz program, który pobierze z wiersza poleceń wymiary trójkąta i narysuje go. Wynik wydrukuj na std::cout. Przykładowe
uruchomienie na listingu 9.*/

#include <iostream>
#include <string>
using namespace std;

int main()
{

    int h;
    string b;
    cout << "Podaj wysokość trójkąta h ";
    cin >> h;

    for (int i = h; i > 0; i--)
    {
   b = b + "*";
            cout << b ;
   cout<<endl;
           
        }
cout << endl;

    return 0;
}
