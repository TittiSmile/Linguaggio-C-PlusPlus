#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLEN 100
#define MAXSTR 20

struct scheda {
char nome[MAXSTR];
char cognome[MAXSTR];
int eta;
};


/*Riempie inizialmente lo schedario*/
int caricaSchedario(struct scheda **schedario); //QUANDO DEVO PASSARE UNA ARRAY DI PUNTATORI A STRUTTURE MEGLIO USARE **
// int caricaSchedario(struct scheda* schedario[]);




/*Cerca una scheda nello schedario per cognome*/
int cercaScheda(struct scheda **schedario, int n, char *cognome);
/*Elimina la scheda iesima*/
int eliminaScheda(struct scheda **schedario, int n,int i);
/*Aggiunge una scheda nello schedario*/
int aggiungiScheda(struct scheda **schedario, int n);
/*Stampa lo schedario*/
void stampaSchedario(struct scheda **schedario,int n);





int main()
{ 
char cognome[MAXSTR];
int scelta;
struct scheda *schedario[MAXLEN]; //VETTORE A PUNTATORI DI STRUTTURE
int n=0,i=0;
n=caricaSchedario(schedario);
    do {
        printf("Scegli: \n esci (0), \n aggiungi un elemento (1), \n elimina un elemento (2), \n stampa schedario (3):");
        scanf("%d",&scelta);
        switch (scelta) 
        {
        case 1:
        n=aggiungiScheda(schedario,n);
        break;
        
        case 2:
        printf("Cognome da eliminare:");
        scanf("%s",cognome);
        i=cercaScheda(schedario,n,cognome);
        if (i>=0) n=eliminaScheda(schedario,n,i);
        break;
        
        case 3:
        stampaSchedario(schedario,n);
        }
    }
    while(scelta!=0);
    
    //qui dovrei fare ciclo i=0; while (schedario[i]!=NULL)   free(schedario[i++]):
return 0;
}
//////////////////////////funzioni//////////////////////////

/*FUNZIONE PER RIEMPIRE UNA SCHEDA.
SI NOTI CHE IN QUESTO CASO E' FISICAMENTE CREATO UNA NUOVA STRUCT E
RESTITUITO IL SUO INDIRIZZO DI MEMORIA*/
struct scheda *riempiScheda()

 {
struct scheda *s=(struct scheda *)malloc(sizeof(struct scheda));
printf("Cognome:");
scanf("%s",s->cognome);//SOLO CON STRINGA POSSO USARE IN SCANF DIRETTAMENTE LA ->
printf("Nome:");
scanf("%s",s->nome);

printf("Eta':");
scanf("%d",&(s->eta));
return s;
}
/* FUNZIONE PER RIEMPIRE INZIALMENTE LO SCHEDARIO
Si noti come in questo caso si suppone che la funzione riceva un array
(schedario) di puntatori a 'struct scheda'. Tale array e inizializzato
mettendo a NULL tutti i puntatori. La funzione, dopodiche, chiede
all'utente quante schede vuole riempire (n) e, poi, CREA opportunamente
tali schede tramite un for in cui e richiamata la funzione riempiScheda.
In questo caso l'iesimo
puntatore, schedario[i], puntera ad una struttura
'struct scheda' allocata in memoria dinamicamente.
AD ESEMPIO:
SE MAXLEN e pari a 3
Inizialmente si avra:
schedario[0] Å® NULL,
schedario[1] Å® NULL,
schedario[2] Å® NULL,
Dopodiche e chiesto il valore di n, si supponga ad esempio n pari a 2.
ALLORA TRAMITE UN FOR da 0 a 1 che chiama la funzione riempiScheda SI
AVRA':
schedario[0] Å® nuovaStructScheda1, (Ottenuta tramite riempiScheda)
schedario[1] Å® nuovaStructScheda2, (Ottenuta tramite riempiScheda)
schedario[2] Å® NULL,
*/
int caricaSchedario(struct scheda **schedario){
int n=0,i;
for (i=0;i<MAXLEN;++i) schedario[i]=NULL;
    do {
    printf("Quante schede vuoi inserire?");
    scanf("%d",&n);
    } while (n>MAXLEN);
for (i=0;i<n;++i) 
    {
    schedario[i]=riempiScheda();
    }
return n;
}



/* FUNZIONE PER CERCARE UNA SCHEDA PER COGNOME
Si noti che in questo caso si suppone di conoscere quanti puntatori
effettivamente puntano ad una scheda (n). Si effettua una ricerca su tali
schede (tramite un while perche la ricerca potrebbe terminare prima di
avere esaminato tutti gli n elementi). Si usa la funzione strcmp per
confrontare la stringa nel campo cognome della scheda con la stringa
cognome che si sta cercando. La funzione strcmp restituisce un valore pari
a 0 se le due stringhe sono uguali, minore di 0 se la prima stringa e
minore della seconda, maggiore di 0 altrimenti.
*/
int cercaScheda(struct scheda **schedario, int n, char *cognome)
{
int i=0;
int trovato=1;
while (i<n && trovato==1)
    {
    /* SI NOTI l'uso dell'operatore '->'
    */
     if (strcmp(schedario[i]->cognome,cognome)==0) trovato=i;
     ++i; 
    }
return trovato;
}


/* FUNZIONE PER ELIMINARE LA iesima
scheda
Si noti che in questo caso si suppone di conoscere quale e la scheda da
eliminare (i) e quante sono i puntatori nell'array schedario che
effettivamente puntano ad una scheda (n). Per eliminare la scheda si deve
effettivamente eliminare la 'struct scheda' puntata dall' iesimo
puntatore
schedario[i] in quanto si tratta di memoria allocata in maniera dinamica.
Cioe si deve liberare la memoria della scheda puntata dal isimo
puntatore.
In piu, si deve spostare (ÅgshiftareÅh) i contenuti dei puntatori successivi
(quelli dopo lo iesimo)
di una posizione a sinistra, mettere a NULL il
puntatore in posizione nsima
e restituire il nuovo numero di puntatori
effettivamente utilizzati, cioe n1.
Se la scheda da eliminare e l'ultima
non si deve spostare nulla, ma solo liberare memoria per l'ultima scheda e
mettere a NULL il puntatore in posizione nsima.
AD ESEMPIO:
SE MAXLEN e pari a 3, n a 2, ed i a 0
Inizialmente si avra:
schedario[0] Å® structScheda1,
51/130
schedario[1] Å® structScheda2,
schedario[2] Å® NULL,
Dopodiche libero' memoria per la scheda puntata da schedario[0], quindi:
schedario[0] Å® NULL,
schedario[1] Å® structScheda2,
schedario[2] Å® NULL,
SPOSTO A SINISTRA GLI ELEMENTI e METTO A NULL IL PUNTATORE IN POSIZIONE n:
schedario[0] Å® structScheda2,
schedario[1] Å® NULL,
schedario[2] Å® NULL,
ED, infine, n e posto ad 1
*/
int eliminaScheda(struct scheda **schedario, int n, int i)
{
int j;
free(schedario[i]); //dealloca iesima struct dell'array
for (j=i;(j+1)<n;++j) schedario[j]=schedario[j+1]; //ricompatta array
schedario[n]=NULL; //scala l'ultimo valore...ossia lo mette a null...
return n;
}

/* FUNZIONE PER AGGIUNGERE UNA SCHEDA
Si noti che in questo caso si suppone di conoscere quante sono le schede
effettivamente riempite (n). Per aggiungere una scheda si deve creare una
nuova scheda e farla puntare dal puntatore che si trova in posizione n+1
(se questa non e' maggiore di MAXLEN), cioe da schedario[n].
*/
int aggiungiScheda(struct scheda **schedario,int n) 
{
if (n <MAXLEN) {
schedario[n]=riempiScheda(); /*Puntatore in posizione n+1 */
++n;
}
return n;
}


/* FUNZIONE PER STAMPARE LO SCHEDARIO
Si noti che in questo caso si suppone di conoscere quante sono le schede
effettivamente riempite (n). Devo scorrere tutte le schede e stamparle a
video. Si noti l'uso dell'operatore '>'.
*/
void stampaSchedario(struct scheda **schedario,int n){
int i=0;
for (i=0;i<n;++i )
printf("\n Scheda[%d]: Cognome: %s Nome:%s Eta':%d\n",i+1,schedario[i]->cognome, schedario[i]->nome, schedario[i]->eta);
}
