#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
void colori();
int main ()
{
    int numero=0;
    char lettera;
    cout<<"Programma che cambia colore al terminale"<< endl;
    colori();
    cout<<"*****INSERIMENTO*****"<< endl;
   do  {
        cout<<"\n\n\tInserisci un numero per il colore dello SFONDO"<< endl;
         cin>> numero;
        if(numero<0 || numero>9)
        {
            cout<<"errore"<< endl;
        }
    }while(numero<0 || numero>9);
    
    cout<<"inserisci una lettera"<< endl;
    cin>> lettera;
   
    /* do  {
        cout<<"\n\n\tInserisci una lettera per il colore del TESTO"<< endl;
         cin>> lettera;
        if( lettera!='a' || lettera!='b' ||  lettera!='c' || lettera!='d' || lettera!='e' || lettera!='f')
        {
            cout<<"errore"<< endl;
        }
    }while( lettera !='a' || lettera!='b' || lettera!='c' || lettera!='d' || lettera!='e' || lettera!='f');*/
   
    
    
  
    system("PAUSE");
    return 0;
}
void colori()
{
   cout<<" I colori disponibili (16 in totale) sono:\n0 = nero\n1 = blu scuro\n2 = verde\n3 = verde acqua\n4 = bordeaux\n5 = viola\n6 = verde oliva\n7 = grigio chiaro\n8 = grigio\n9 = blu\n\nA = verde limone\nB = azzurro\nC = rosso\nD = fucsia\nE = giallo\nF = bianco"<<endl;
}
