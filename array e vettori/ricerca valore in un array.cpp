//ricerca di un elemento in un vettore.
#include <iostream>
using namespace std;
int main ()
{
    int parola [30];
    int i,lunghezza,control,exit=0;
    do
    {
        cout << "Programma che ricerca la presenza di un elemento in un vettore.\nQuanto e' lunga la sequenza?" << endl;
        cin >> lunghezza;
            if (lunghezza<2 || lunghezza>30)
            {
                cout << "\t\t|ERRORE! Digitare minimo 2 numeri e massimo 30 numeri|\n " << endl;
            }
        
    }while (lunghezza<2 || lunghezza>30);   // mettiamo lunghezza<2 perchè se ci sono meno di 2 elementi,la ricerca è inutile. lunghezza>30 perchè non si può superare quella grandezza
    cout <<"Inserire " << lunghezza << " numeri: " << endl;
        for (int i=0; i<lunghezza;i++)
        {
            cout << "\nInserisci il " << i+1 << " numero" << endl;
            cin >> parola [i];
        }
            cout << "Quale numero vuoi cercare? " << endl;
            cin >> control;
            i=0;
               while (i<lunghezza && exit==0)
               {
                       if (parola[i]==control)
                       {
                           exit=1;
                       }
                           else 
                           {
                               i++;
                           }
               }
                                if (exit == 1)
                                {
                                    cout << "Il numero e' presente nella sequenza!" << endl;
                                }
                                    else  
                                     {
                                         cout << "Il numero non e' presente nella sequenza!" << endl;
                                     }
        
    return 0;
}
