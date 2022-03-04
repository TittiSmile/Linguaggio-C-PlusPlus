//programma che calcola le potenze senza l'utilizzo della liberia math.h e del pow.
#include <iostream>
using namespace std;
int main ()
{
int base,esponente,contatore,potenza;
do 
{
cout << "Programma che calcola le potenze.\nInserisci la base: " << endl;
cin >> base;
if (base<0)
{
    cout << "ERRORE! La base deve essere un numero intero.\n"<< endl;
}
}while (base<2
);
//°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°PRIMO METODO!!!!!!!°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
do
{
   cout << "Inserisci l'esponente: " << endl;
   cin >> esponente;
   if (esponente<0)
   {
       cout << "ERRORE! L'esponente deve essere un numero intero positivo\n" << endl;
   }
}while (esponente <0);
if (esponente==0)
{
    cout << "1" << endl; 
}else if (esponente==1)
{
    cout << base << endl;
} 
else if (esponente !=0)
{
    potenza=base;
    for (int contatore=1;contatore<esponente;contatore++)
    {
        potenza=potenza*base;
        //cout << potenza<<" "  ;
    }
     cout << potenza<<" "  ;
} 
                                              // questo metodo viene usato se si vuol far uscire in output solo la potenza! esempio:
                                             // se si mette come base 2 ed esponente 3,con questo metodo uscirà solo 8. il metodo successivo farà uscire tutti
                                            // i numeri con esponenti a partire da 0(2^0;2^1...)!esempio: 1,2,4,8, ecc... 


// °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°SECONDO METODO!!!°°°°°°°°°°°°°°°°°°°°°°°°
/*do
{
   cout << "Inserisci l'esponente: " << endl;
   cin >> esponente;
   if (esponente<0)
   {
       cout << "ERRORE! L'esponente deve essere un numero intero positivo\n" << endl;
   }
}while (esponente <0);
  cout << "1";
        if (esponente !=0)
           {
               potenza=base;
               cout <<","<< base;
               for (int contatore=1;contatore<esponente;contatore++)
            {
                potenza=potenza*base;
                cout <<","<< potenza;
           } 
        }
             if (base%2==0)
             {
                 cout << "\nI numeri sono PARI (tranne il primo)" << endl;
             }
             else
             {
                 cout << "\nI numeri sono DISPARI " << endl;
             } */

    return 0;
}

