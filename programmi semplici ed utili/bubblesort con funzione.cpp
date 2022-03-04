//Programma che ordina i numeri di un vettore tramite BUBBLE SORT e annessa FUNZIONE
#include <iostream>
using namespace std;
void bubblesort (int vettore[],int n)  // questa è la funzione void (anche chiamata procedura). si inserisce il vettore senza determinare la grandezza e il numero n
                                      //così facendo,nel main basterà soltanto richiamare la funzione tramite valore.
                                      // i vettori in c++ vengono passati automaticamente per valore. quindi per questo motivo abbiamo scritto le parentesi quadre
                                      // vuote, non c'è bisogno di mettere  * oppure &
/*{
    int i;
    int scambio;
    int ultimo_scambio;
    int limite;
    int deposito;
     
     for (int i=0;i<n;i++)
     {
         cin >> vettore[i];
     }
      do
      {
          limite=0;
          for (int i=n-1;i>limite;i--)
          {
              scambio=0;
              if (vettore[i] < vettore[i-1])
              {
                  deposito= vettore[i];
                  vettore[i]= vettore[i-1];
                  vettore[i-1]=deposito;
                  scambio=1;
              }
              ultimo_scambio=i;
          }
          limite=ultimo_scambio;
          
      } while (scambio !=0);
    
}*/

{
   int scambio;
   int ultimo_scambio;
   int i;
   int limite;
   int deposito;
       for (int i=0;i<n;i++)
       {
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



}



       
 int main ()
{
    int vettore1 [20];
    int numero=5;
    for (int i=0;i<numero;i++)
    {
        cin >> vettore1[i];
    }
    bubblesort (vettore1,numero);
    for (int i=0;i<numero;i++)
    {
        cout << "i numeri ordinati sono: " << endl;
        cout << vettore1[i] << endl;
    }
    return 0;
    
    
}
     
       
      
       
       
       
       
       
       
       
       
       
