/*3.4.0.4 Cone Napisz program, który demonstruje działanie funkcji cone(). Funkcja będzie przyjmować 2
parametry: wysokość i promień, oraz zwracać 2: jego objętość, pole podstawy (podpowiedź: użyj referencji).
W funkcji main() napisz kod, który wywołuje funkcję cone(). Wynik wydrukuj na std::cout.*/

#include <iostream>
#include <cmath>
using namespace std;

void cone(int h, int r)
{
	double f = 3.14 * pow(2, r);
	double v = (f / 3) * h;
	cout << "Objętość stożka wynosi: " << v << "\n" << "Pole podstawy stożka wynosi: " << f << "\n";
}

int main()
{
	int h_value, r_value;
	cout << "Podaj wysokość i promień stożka:"; cin >> h_value >> r_value;
	int* h = &h_value;
	int* r = &r_value;
	cone(*h, *r);
	return 0;

}
