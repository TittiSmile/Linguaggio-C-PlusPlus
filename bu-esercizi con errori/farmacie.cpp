/*Ciascuno dei 15 quartieri della città di paperopoli ha 8 farmacie, in ciascuna delle quali lavorano 7 farmacisti.
Si progetti ed implementi in C/C++ un algoritmo che :

1. acquisisca da standard input gli elementi di un vettore tridimensionale A di dimensione 15 x 8 x 7, dove
A[i][j][k]= 1, se il farmacista k della farmacia j del quartiere i è in ferie;
A[i][j][k]= 0, se il farmacista k della farmacia j del quartiere i non è in ferie.
2. invochi una funzione che restituisca da quanti e quali farmacisti che lavorano nella farmacia 7 del quartiere 4 non sono in ferie;
3. invochi una funzione che restituisca in output per ciascun quartiere il totale dei farmacisti in ferie.*/
#include <iostream>
using namespace std;

const int quartieri=3;//è 15
const int farmacie=2; // è 8
const int farmacisti=1;// è 7

void acquisisci (int a[][farmacie][farmacisti]);
int quar (int a[][farmacie][farmacisti]);
int ferie (int a [][farmacie][farmacisti]);
int main ()
{
    int i,j,k;
    int a [quartieri][farmacie][farmacisti];
    for (int i=0;i<quartieri;i++)
    {
        for (int j=0;j<farmacie;j++)
        {
            for (int k=0;k<farmacisti;k++)
            {
                cout <<"Inserisci il valore del farmacista "<<k+1<<" della farmacia "<<j+1<<" nel quartiere "<<i+1<<": "<< endl;
                cin >> a[i][j][k];
            }
        }
    }
    
    
    
    
    
    
    
    return 0;
}
