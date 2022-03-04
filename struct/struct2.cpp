#include <stdio.h>
#include <string.h>
#define MAXLEN 100
#define MAXSTR 20

/*Struttura dati per mantenere informazioni su una singola persona*/
/* Si noti che nella istruzione successiva viene sono dichiarata la 'struct
scheda' ma non e' creata alcuna variabile di tipo 'struct scheda' */

struct scheda {
char nome[MAXSTR];
char cognome[MAXSTR];
int eta;


};

/* DICHIARAZIONI FUNZIONI CHE SARANNO UTILIZZATE NEL MAIN */
/*Riempie inizialmente lo schedario*/
int caricaSchedario(struct scheda *schedario);
/*Cerca una scheda nello schedario per cognome*/
int cercaScheda(struct scheda *schedario, int n, char *cognome);
/*Elimina la scheda iesima*/
int eliminaScheda(struct scheda *schedario, int n,int i);
/*Aggiunge una scheda nello schedario*/
int aggiungiScheda(struct scheda *schedario, int n);
/*Stampa lo schedario*/
void stampaSchedario(struct scheda *schedario,int n);

/*PROGRAMMA PRINCIPALE*/
int main()
{ 
char cognome[MAXSTR];
int scelta;
struct scheda schedario[MAXLEN];
int n=0,i=0;
n=caricaSchedario(schedario);

do 
{
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
            i=cercaScheda(schedario, n,cognome);
            if (i>=0) n=eliminaScheda(schedario,n,i);
            break;
            
            case 3:
            stampaSchedario(schedario,n);
            }
}   while(scelta!=0);
        
        return 0;
}

/* DEFINIZIONE DELLE FUZIONI CHE SONO UTILIZZATE NEL MAIN O CHE POSSONO
ESSERE RICHIAMATE IN TALI FUNZIONI*/


/*FUNZIONE PER RIEMPIRE UNA SCHEDA
In questo caso la funzione riceve l'indirizzo di memoria di una 'struct
scheda' (quindi si suppone che la struct gia' esista) e riempie
opportunamente i campi della struct
*/
void riempiScheda(struct scheda *s) 
{
printf("Cognome:");
scanf("%s",s->cognome); /*Si noti l'uso dell'operatore '>'*/
printf("Nome:");
scanf("%s",s->nome);
printf("Eta':");
scanf("%d",&(s->eta));
}

/* FUNZIONE PER RIEMPIRE INZIALMENTE LO SCHEDARIO
Si noti come in questo caso si suppone che la funzione riceva un array di
'struct scheda' che gia' esistono (sono gia' allocate in memoria). La
funzione chiede all'utente quante schede vuole riempire e,poi, riempie
opportunamente tale schede tramite la funzione riempiScheda.
*/
int caricaSchedario(struct scheda *schedario)
{
int n=0,i;


do 
    {
    printf("Quante schede vuoi inserire?");
    scanf("%d",&n);
    } while (n>MAXLEN);
for (i=0;i<n;++i) riempiScheda(&schedario[i]);
return n;
}


/* FUNZIONE PER CERCARE UNA SCHEDA PER COGNOME
Si noti che in questo caso si suppone di conoscere quante schede sono
effettivamente riempite (n), e si opera una ricerca su tali schede (tramite
un while perchè la ricerca potrebbe terminare prima di avere esaminato
tutti gli n elementi). La funzione strcmp è usata per confrontare la
stringa nel campo cognome della scheda con la stringa cognome che si sta
cercando. La funzione strcmp restituisce un valore pari a 0 se le due
stringhe sono uguali, minore di 0 se la prima stringa è minore della
seconda, maggiore di 0 altrimenti.
*/
int cercaScheda(struct scheda *schedario, int n,char *cognome)
{
int i=0,trovato=1;
    while (i<n && trovato==1)
    {
        if (strcmp(schedario[i].cognome,cognome)==0) trovato=i;
        ++i;
    }
return trovato;
}


/* FUNZIONE PER ELIMINARE LA iesima
scheda
Si noti che in questo caso si suppone di conoscere quale è la scheda da
eliminare (i) e quante sono le schede effettivamente riempite (n). Per
eliminare la scheda non si può eliminare effettivamente la 'struct scheda'
presente nella iesima
posizione in quanto si tratta di memoria allocata in
maniera automatica. Si può, pero', spostare (“shiftare”) i contenuti delle
schede successive (quelle dopo la iesima)
di una posizione a sinistra, e
restituire il nuovo numero di schede effettivamente riempite, cioè n1.
Se
la scheda da eliminare è l'ultima non si deve spostare nulla.
*/


int eliminaScheda(struct scheda *schedario, int n,int i)
{
int j=0;
for (j=i;(j+1)<n;++j)
schedario[j]=schedario[j+1];
return n;
}

/* FUNZIONE PER AGGIUNGERE UNA SCHEDA
Si noti che in questo caso suppongo di conoscere quante sono le schede
effettivamente riempite (n). Per aggiungere una scheda devo riempire la
scheda che si trova in posizione n+1 (se questa non e' maggiore di MAXLEN).
*/

int aggiungiScheda(struct scheda *schedario, int n)
{
if (n<MAXLEN) 
{
riempiScheda(&schedario[n]);
++n;
}
return n;
}

/* FUNZIONE PER STAMPARE LO SCHEDARIO
Si noti che in questo caso si suppone di conoscere quante sono le schede
effettivamente riempite (n). Si scorrono tutte le schede per stamparle a
video.
*/
void stampaSchedario(struct scheda *schedario,int n)
{
int i;
for (i=0;i<n;++i)
printf("\n Scheda[%d]: Cognome: %s Nome:%s Eta':%d\n",i+1,schedario[i].cognome, schedario[i].nome, schedario[i].eta);
}
