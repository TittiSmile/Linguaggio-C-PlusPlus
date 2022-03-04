//ordinamento di un vettore tramite BUBBLE SORT.
#include <iostream>
using namespace std;
int main ()
{
   int vettore[20];
   int n;
   int scambio;
   int ultimo_scambio;
   int i;
   int limite;
   int deposito;
   cout << "Quanti numeri vuoi inserire? " << endl;
   cin >> n;
   for (int i=0;i<n;i++)
   {
       cout << "Inserisci il " << i+1 << " numero" << endl;
       cin >> vettore [i];
   }
   limite=0;
   do
   {
       scambio=0;
       for (int i=n-1;i>limite;i--)
       {
           if (vettore[i] < vettore [i-1])
           {
               deposito=vettore[i];
               vettore[i]=vettore[i-1];
               vettore[i-1]= deposito;
               scambio=1;                 // se c'è stato uno scambio, "scambio" non sarà più =0 ma sarà =1.
               ultimo_scambio=i;         // "i" è la posizione dell'ultimo scambio avvenuto e da là si dovrà riprendere l'ordinamento dei numeri.
           }
       }
       limite=ultimo_scambio;         // in  questo caso viene aggiornata anche la posizione  di "scambio"
       
   }while (scambio !=0);
   cout << "I numeri disposti in modo crescente sono:\n" << endl;
   for (int i=0;i<n;i++)
   {
       cout << vettore[i]<< "  " ;
   }
   
    return 0;
}



/*
5 2 6 8 1       dai righi 33-37 viene verificato se 1 è più grande/più piccolo del numero precedente. se ciò fosse,viene scambiato. questa verifica viene     
5 2 6 1 8       fatta con tutti i numeri della sequenza. 8,essendo il più grande,resta a destra.
5 2 1 6 8 
5 1 2 6 8
1 5 2 6 8

1 2 5 6 8 


*/









