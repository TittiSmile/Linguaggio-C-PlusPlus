#include <iostream>
using namespace std;

typedef struct NODO
{
    int primo;
    struct NODO *next;
}nodo;

int main ()
{
    nodo *p=NULL;     //nome della lista 
    nodo *nuovo=NULL; // nome del nodo da mettere in testa
    nodo *temp=NULL;  // nodo temporaneo/di appoggio
    
    nuovo=new nodo;
  
    nuovo->primo=5;
    nuovo->next=p;   //questo passaggio fa sì che il nodo 'nuovo' punti al 'primo' di p
    p=nuovo;        //risultano essere uguali
    
    cout<< nuovo->primo <<" \t<---- qui abbiamo 'nuovo' che punta a 'primo'\n\noppure\n\n qui abbiamo 'p' che punta a 'primo' ----->\t"<< p->primo<< endl;
    //cosa vuol dire ciò? semplicemente,abbiamo inserito in testa (lista VUOTA) il valore 5. abbiamo dichiarato il primo puntatore 'p' e un puntatore 'nuovo'. 
    //essi sono rispettivamente la lista di partenza(ora vuota ma da riempire) e il nodo da accollare alla lista. dopo aver allocato memoria per il nodo da 
    //accollare ('nuovo') gli diamo il valore 5. il prossimo('next') vaolre di 'nuovo' non sarà uguale a 'NULL'(che equivale a dire lista finita) ma,bensì,uguale
    //a 'p' ovvero alla lista di partenza! in questo modo,sia 'p' che 'nuovo' punteranno allo stesso valore (ovvero 5) e quindi,nel momento in cui diamo 'cout'
    // sia che scriviamo 'nuovo->primo' o 'p->primo',sarà la stessa cosa perchè partiranno/punteranno allo stesso e identico valore.
    
    
//faccio un ciclo per dare dei valori alla lista
cout<<"\n\n\n"<< endl;   
    for (int i=0;i<10;i++)
    {
        nuovo= new nodo;
        nuovo->primo=i;
        nuovo->next=p;
        p=nuovo;
        //stesso procedimento come fatto sopra!
    }
     
     //stampo la lista
      temp=p;
    while(temp!=NULL)
    {
        cout<<temp->primo<< endl;
        temp=temp->next;
    }
    cout<<"\tda notare l'ultimo elemento!!! "<< endl<<endl;
    
    //cancella interamente la lista
    
    temp=p;
    while(p != NULL)
    {
        temp=p->next;
        delete p;
        p=temp;
    }
    
    //stampo la lista dopo averla distrutta
   while (temp!=NULL)
   {
       cout<< temp->primo<< endl;
       temp=temp->next;
       
   }
    
    
    system ("PAUSE");
    return 0;
    
}
