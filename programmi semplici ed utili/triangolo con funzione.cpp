//programma che calcola ipotenusa,area e perimetro del triangolo
#include <iostream>
#include <math.h>
using namespace std;
int area (int a,int b);
int perimetro(int a,int b);
int ipotenusa(int a,int b);
int main ()
{
    int base;
    int altezza;
    cout << "Programma che calcola ipotenusa,area e perimetro di un triangolo rettangolo.\nQuanti cm e' la base?  " ;
    cin >> base;
    cout << "Quanti cm e' l'altezza?  " ;
    cin >> altezza;
    cout << "L'area e'  " << area(base,altezza) <<"\nIl perimetro e' "<< perimetro(base,altezza)<< "\nL'ipotenusa e' " << ipotenusa(base,altezza)<< endl;
    return 0;
}

int area (int a,int b)
{
    int A;
   A=(a*b)/2;
   return A;
}

int perimetro(int a,int b)
{
    int P;
    P=a+b+b;
    return P;
}

int ipotenusa(int a,int b)
{
    int I;
    I=(a*a)+(b*b);
    return I;
}


