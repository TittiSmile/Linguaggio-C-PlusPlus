//esercizio con i PUNTATORI
#include <iostream>
using namespace std;
int main ()
{
    //i puntatori hanno SEMPRE dimensione 3 byte.
    // variabili char,int,float ecc variano di dimensione. int (4byte),char (1byte)
    int numero=5;
    int *puntatore;
    puntatore=&numero;
    cout << "Il numero e' : " << numero << endl;
    cout << "Il puntatore e' :(locazione) " << puntatore << endl;  // a schermo,uscirà un valore piuttosto strano. non è altro che la locazione di memoria del puntatore
    cout << "Il valore puntato e': " << *puntatore << endl; // a schermo uscirà il valore 5 poichè abbiamo dichiarato che puntatore=&numero ovvero il puntatore è uguale al valore che contiene la variabile "numero"
    *puntatore=50;                                         //in questo caso modifichiamo il valore puntato al puntatore che è la stessa cosa di numero,viene modificato il valore contenuto nella cella "numero".
    cout << "Dopo aver cambiato valore al puntatore,numero e' : " << numero << endl;


    // scambio due variabili
    int numero2=3;
    int *puntatore2;
    int temp;
    puntatore2=&numero2;
    cout << "\n\n\n\tvalori prima dello scambio!!\nNumero2: " << numero2 <<"\n*puntatore2: "<< *puntatore2 << endl;
    temp=*puntatore;
    *puntatore=*puntatore2;
    *puntatore2=temp;
    cout << "\tDopo lo scambio!!!! "<< endl;
    cout << "Numero2: " << numero2 << endl;
    cout << "*puntatore2: " << *puntatore2 << endl;

    return 0;
}
