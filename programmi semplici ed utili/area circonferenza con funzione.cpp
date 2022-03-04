//programma che calcola l'area del cerchio con funzione
#include <iostream>
using namespace std;
float area (int raggio);
int main ()
{
    int r;
    cout << "Inserire il raggio della circonferenza" << endl;
    cin >> r;
    area(r);
    cout << "L'area del cerchio e' " << area(r) << endl;
    return 0;
}

float area (int raggio)
{
    float sup;
    sup=raggio*raggio*3.14;
    return sup;
    
}
