//INCEPTION
/*3.2.0.7 Inception Napisz funkcj� max2, kt�ra zwraca najwi�ksz� liczb� z 2
podanych. Napisz funkcj� max3, kt�ra zwraca najwi�ksz� liczb� z 3 podanych.
Funkcja max3 ma do teg*/

#include <iostream>
using namespace std;

int max2(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int max3(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
            return a;
        else 
            return c

    }
    else
    {
        return b;
}
int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    int max = max2(a, b);
    int max3(a, b, c);
    return 0;
}