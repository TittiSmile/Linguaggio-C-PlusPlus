
#include <iostream>
#include <ctime>                            // per usare l'orario come seed per srand
#include <cstdlib>                            // per le funzioni rand e srand, system.

#include <iomanip>                            // per manipolare l'output con cout

#ifdef WIN32
#define pulisci() (system("cls"))
#else                          
#define pulisci() (system("clear"))
#endif

#ifdef WIN32
#include <windows.h>                        // per sleep e usleep sotto windows??
#else //LINUX
#include <unistd.h>                            // per la funzione sleep(seconds) e usleep
#endif

using namespace std;

void    benvenuto();
int     scegli_diff(int *A, int *B);
int     acquisisci_int(int A, int B);
void    caricamento();
void    inizializza_gioco(char *punt, int n, int m);
void    stampa_gioco(char *punt, int n, int m, int *mine, int *cas_scoperte);
void    acquisisci_coordinate(int *X, int *Y, int n, int m);
void     genera_mine(int *punt, int n, int m, int x, int y, int mine);
void    stampa_debug(int *punt, int n, int m);
void    genera_campo(int *punt, int n, int m);
bool     check_coord(int *punt, char *punt2, int x, int y, int n, int m, int *cas_scoperte);

int main(){
    int     n,m;            // le dimensioni della matrice di gioco
    pulisci();
    benvenuto();
    scegli_diff(&n,&m);        // fa scegliere una difficoltà e scrive in n e m le dimensioni opportune.
    pulisci();

    int     gioco[n][m];            // dichiaro la matrice numerica che rappresenterà la tabella di gioco
    
    for(int i=0;i<n;i++){            // inizializzo la matrice numerica a tutti zeri
        for(int j=0;j<m;j++){
            gioco[i][j]=0;
        }
    }
    /*    gioco[0][3]=-1;                // VALORI PER DEBUG
        gioco[0][0]=-1;
        gioco[1][0]=-1;
        gioco[2][0]=-1;
        gioco[3][0]=-1;
        gioco[1][3]=-1;
        gioco[2][3]=-1;
        gioco[3][3]=-1;
        gioco[10][10]=-1;
        gioco[n-1][4]=-1;
     */

    int*    punt=&gioco[0][0];        // dichiaro ed inizializzo un puntatore al primo elemento della matrice gioco
    char    gioco2[n][m];            // dichiaro la matrice di caratteri che verrà mostrata al giocatore
    char*    punt2=&gioco2[0][0];    // dichiaro ed inizializzo un puntatore al primo elemento della matrice gioco2
    caricamento();                    // in realtà questo caricamento non serve a nulla
    inizializza_gioco(punt2,n,m);    // Inizializza la matrice dei caratteri a tutti '?'. Voglio provare a far fare al
    //                                       giocatore la prima mossa senza che siano state ancora posizionate le mine,
    //                                    e conseguentemente generare le mine in maniera casuale, in modo che la prima mossa
    //                                    non possa mai essere anche l'ultima.
    int     mine=(16*n*m)/64;        // La stessa formula del minesweeper originale
    int     caselle_scoperte=0;
    stampa_gioco(punt2,n,m,&mine,&caselle_scoperte);

    //    Acquisisco le prime coordinate fuori dal ciclo, visto che voglio assicurare che la prima mossa sia sicura.
    
    int x,y;                                    // Sono le coordinate dei vari tentativi del giocatore.
    acquisisci_coordinate(&x,&y,n,m);
    //cout<<x<<" "<<y<<"\n";                    // DEBUG
    //cout<<x*m+y<<"\n";                        // DEBUG
    genera_mine(punt, n, m, x, y, mine);        // Genera casualmente le mine, x e y sono le coordinate "sicure".
    // stampa_debug(punt, n, m);
    genera_campo(punt, n, m);
    // cout<<"\n\n";
    // stampa_debug(punt, n, m);
    bool    boom=false;

    boom=check_coord(punt,punt2,x,y,n,m,&caselle_scoperte);

    while(boom==false && caselle_scoperte!=(m*n)-mine){
        pulisci();
        stampa_gioco(punt2,n,m,&mine,&caselle_scoperte);
        acquisisci_coordinate(&x,&y,n,m);
        boom=check_coord(punt,punt2,x,y,n,m,&caselle_scoperte);
    }
    pulisci();

    if(boom){
        cout<<"\n\n\n\n";
        cout<<"\t\t    _____    \n";
        cout<<"\t\t  //  +  \\   \n";
        cout<<"\t\t ||  RIP  |  \n"; 
        cout<<"\t\t ||       |  \n"; 
        cout<<"\t\t ||       |  \n";  
        cout<<"\t\t\\||/\\/\\//\\|/ \n"; 

        cout<<"\n\n\n\n\t\tBOOM! HAI PERSO!\n\n\n\n\n";
    }
    else{
        cout<<"\n\n\n\n\t\tCOMPLIMENTI, HAI VINTO!\n\n\n\n\n";
    }
    return 0;
}

void benvenuto(){
    cout<<"\n\n\n";
    cout<<"   ,ggggggggggg,                                                                                             \n";
    cout<<"  dP\"\"\"88\"\"\"\"\"\"Y8,                        I8                                                        \n";
    cout<<"  Yb,  88      `8b                        I8                                                                 \n";
    cout<<"   `\"  88      ,8P                     88888888                                                             \n";
    cout<<"       88aaaad8P\"                         I8                                                                \n";
    cout<<"       88 \"\"\"\"\"    ,gggggg,    ,gggg,gg    I8      ,ggggg,                                              \n";
    cout<<"       88         dP\"\"\"\"8I   dP\"  \"Y8I    I8     dP\"  \"Y8ggg                                         \n";
    cout<<"       88        ,8'    8I  i8'    ,8I   ,I8,   i8'    ,8I                                                   \n ";
    cout<<"       88       ,dP     Y8,,d8,   ,d8b, ,d88b, ,d8,   ,d8'                                                   \n";
    cout<<"       88       8P      `Y8P\"Y8888P\"`Y888P\"\"Y88P\"Y8888P\"                                               \n";
    cout<<"                                                                                                             \n";
    cout<<"                                                                                                             \n"; 
    cout<<"                       ,gggggggggggggg                                                                       \n"; 
    cout<<"                      dP\"\"\"\"\"\"88\"\"\"\"\"\"                                     I8                    \n"; 
    cout<<"                      Yb,_    88                                           I8                                \n"; 
    cout<<"                       `\"\"    88      gg                            gg  88888888                           \n"; 
    cout<<"      _                    ggg88gggg  \"\"                            \"\"     I8                            \n"; 
    cout<<"    _( )_                     88   8  gg     ,ggggg,     ,gggggg,   gg     I8      ,ggggg,                   \n"; 
    cout<<"   (_)@(_)                    88      88    dP\"  \"Y8ggg  dP\"\"\"\"8I   88     I8     dP\"  \"Y8ggg        \n"; 
    cout<<"     (_)\\               gg,   88      88   i8'    ,8I   ,8'    8I   88    ,I8,   i8'    ,8I                  \n";        
    cout<<"        |                \"Yb,,8P    _,88,_,d8,   ,d8'  ,dP     Y8,_,88,_ ,d88b, ,d8,   ,d8'                 \n";       
    cout<<"       \\|/                \"Y8P'    8P\"\"Y8P\"Y8888P\"    8P      `Y88P\"\"Y888P\"\"Y88P\"Y8888P\"         \n";
    cout<<"     \\\\\\|//          \n";
    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\tC++ edition\n\t\t\t\t\t\t\t\t\t\t\tdi Luigi Starace\n\n";
}    

int scegli_diff(int *A, int *B){
    int     diff;
    cout<<"\n\t* Scelta del livello di difficoltà:\n\n";
    cout<<  "\t     1 = Molto Facile  (griglia 4x4)\n";
    cout<<  "\t     2 = Facile        (griglia 8x8)\n";
    cout<<  "\t     3 = Normale       (griglia 16x16)\n";
    cout<<  "\t     4 = Difficile     (griglia 20x26)\n\n";
    cout<<  "\t* Inserisci il numero corrispondente al livello di difficoltà desiderato: ";
    diff=acquisisci_int(1,4);
    switch(diff){
        case 1:
            *A=4; *B=4;
            break;
        case 2:
            *A=8; *B=8;
            break;
        case 3:
            *A=16; *B=16;
            break;
        case 4:
            *A=20; *B=26;
            break;
    }
    return diff;
    //sleep(1);
}

int acquisisci_int(int A, int B){
    int num;
    do{
        cin>>num;
        if(num<A || num>B)
            cout<<"\t* Errore! Hai inserito un numero non valido! Riprova: ";
    }while(num<A||num>B);
    return num;
}

void caricamento(){
    for(int i=0; i<2 ; i++){
        pulisci();
        cout<<"\n\n\n\n\n\tCaricamento\n";
        cout<<"\tLa partita sta per iniziare. :)\n";
        //usleep(500*1000);
        pulisci();
        cout<<"\n\n\n\n\n\tCaricamento.\n";
        cout<<"\tLa partita sta per iniziare. :D\n";
        //usleep(500*1000);
        pulisci();
        cout<<"\n\n\n\n\n\tCaricamento..\n";
        cout<<"\tLa partita sta per iniziare. :P\n";
        //usleep(500*1000);
        pulisci();
        cout<<"\n\n\n\n\n\tCaricamento...\n";
        cout<<"\tLa partita sta per iniziare. :3\n";
        //usleep(500*1000);
        pulisci();
        cout<<"\n\n\n\n\n\tCaricamento....\n";
        cout<<"\tLa partita sta per iniziare. :]\n";
     //   usleep(500*1000);
    }
    pulisci();
}

void inizializza_gioco(char *punt, int n, int m){
    for(int i=0; i<(n*m) ; i++){
        *(punt++)='?';
    }
}

void stampa_gioco(char *punt, int n, int m, int *mine, int *cas_scoperte){
    char    c='A';
    cout<<"\n\n\n\t    ";
    for(int i=0 ; i<m ; i++)            //stampa le lettere sopra la tabella
        cout<<""<<c++<<" ";
    cout<<"\n\t    ";
    for(int i=0 ; i<m ; i++)
        cout<<"_ ";
    cout<<"\n";
    for(int i=0; i<n ; i++){
        cout<<"\t"<<setw(2)<<i+1<<" ";
        for(int j=0; j<m; j++){
            cout<<"|"<<*(punt++)<"|";
        }
        cout<<"| "<<i+1<<"\n";
    }
    /*cout<<"\t    ";
    for(int i=0 ; i<m ; i++)            // Non mi piace l'effetto con la linea tratteggiata anche sotto,
        cout<<"_ ";                        // Quindi l'ho rimosso.
    cout<<"\n";*/
    c='A';
    cout<<"\t    ";
    for(int i=0 ; i<m ; i++)            //stampa le lettere sotto la tabella
        cout<<""<<c++<<" ";
    cout<<"\n\n\n";
    cout<<"\tCASELLE TOTALI:    \t"<<m*n<<"\n";
    cout<<"\tMINE NASCOSTE:     \t"<<*mine<<"\n";
    cout<<"\tCASELLE ESPLORATE: \t"<<*cas_scoperte<<"\n\n";
}

void acquisisci_coordinate(int *X, int *Y, int n, int m){                //scrive in x e y le coord scelte!
    char    c;
    int     num;
    cout<<"\n\tInserisci ora la prima coordinata (una lettera): ";
    do{
        do{
            cin>>c;
            if(!((c>='A' && c<='Z') || (c>='a' && c<='z')))
                cout<<"Carattere non valido! Riprova: ";
        }while(!((c>='A' && c<='Z') || (c>='a' && c<='z')));
        if(c>='a'&& c<='z')
        c-=32;
        if(c-65>m-1)                                                //devo controllare che non si inserisca un carattere non presente
            cout<<"\tCoordinata non valida! Riprova: ";                //sulla tabella di gioco nella difficoltà attuale!
    }while(c-65>m-1);
    *Y=c-65;            //65 è il valore decimale ascii di 'A'    //Ho trovato la prima coordinata!
    cout<<"\n\tInserisci ora la seconda coordinata (un numero): ";
    do{
        cin>>num;
        if(num<0||num>n)
            cout<<"\tCoordinata non valida! Riprova: ";
    }while(num<0||num>n);
    num--;                                    //perchè sulla tabella ho riportato l'indice +1 per non stampare lo 0!
    *X=num;
}

void genera_mine(int *punt, int n, int m, int x, int y, int mine){
    //    Nel campo di gioco numerico, i -1 saranno le mine, e gli le altre caselle assumeranno valori tra 0 e 8
    //    a seconda di quanti -1 vi sono adiacenti.

    int     random;
    int     vettore[mine];                            // Per registrare i valori già estratti dal random
    for(int i=0; i<mine ; i++){
        vettore[i]=x*m+y;
    }
    bool    gia_estratto;
    srand(time(NULL));
    for(int i=0; i<mine; i++){                        
        do{
            gia_estratto=false;
            random=rand()%((n*m)-1);
            for(int j=0; j<mine; j++){                
                if(random==vettore[j]){
                    gia_estratto=true;
                    break;
                }
            }
        }while(gia_estratto);                        // A questo punto qui ogni random è assicurato essere diverso dai precedenti.
        vettore[i]=random;
        gia_estratto=false;
        //cout<<random<<"\n";                            // DEBUG
        *(punt+random)=-1;
    }
    /*                                                    // Codice di debug, sostituito dalla funzione stampa_debug.
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<setw(2)<<*(punt+(i*m)+j)<<" ";
        }
        cout<<"\n";
    }*/
}

void stampa_debug(int *punt, int n, int m){                // Stampa la matrice numerica associata al gioco per fini di debug
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<setw(2)<<*(punt+(i*m)+j)<<" ";
        }
        cout<<"\n";
    }
}

void genera_campo(int *punt, int n, int m){
    //    Questa procedura, preso il puntatore alla matrice di interi dove i -1 rappresentano le mine,
    //    inserisce in ogni casella con valore diverso da -1, un intero corrispondente al numero di bombe
    //    adiacenti alla casella stessa. Prima di leggere oltre prepararsi mentalmente al casino di puntatori e if/else.
    //    Il codice che segue è maledetto. Ho provato più volte a scriverlo come Dio comanda, ma ogni 
    //    tentativo è stato vano e generava errori diversi. Questo è l'unico modo in cui sono riuscito a farlo funzionare.
    //    NOTA AL FUTURO ME STESSO: SE CREDERAI DI POTER MIGLIORARE QUESTO CODICE, FAI UNA COPIA DI QUESTO, CHE ALMENO
    //     FUNZIONA, PRIMA DI TENTARE LA MODIFICA!

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(*(punt+(m*i)+j)==-1){
                if(j==0){                        // SE LA MINA STA NELLA PRIMA COLONNA
                    if(i==0){                    // se la mina è nell'angolo in alto a sx
                        if(*(punt+1)!=-1)
                            *(punt+1)+=1;            // casella a dx
                        
                        if(*(punt+m)!=-1)
                            *(punt+m)+=1;            // casella sotto
                        
                        if(*(punt+m+1)!=-1)
                            *(punt+m+1)+=1;            // casella sotto a dx
                    }
                    else if(i==n-1){            // se la mina è nell'angolo in basso a sx
                        
                        if(*(punt+(m*(i-1)))!=-1)
                            *(punt+(m*(i-1)))+=1;    // casella sopra
                        
                        if(*(punt+(m*(i-1))+1)!=-1)
                            *(punt+(m*(i-1))+1)+=1;    // casella sopra a dx
                        
                        if(*(punt+m*i+1)!=-1)
                            *(punt+m*i+1)+=1;        // casella a dx
                    }
                    else{                        // se la mina si trova sulla prima colonna ma non negli angoli
                        
                        if(*(punt+m*(i-1))!=-1)
                        *(punt+m*(i-1))+=1;        // casella sopra

                        if(*(punt+m*(i-1)+1)!=-1)
                            *(punt+m*(i-1)+1)+=1;    // casella sopra a dx

                        if(*(punt+m*i+1)!=-1)
                            *(punt+m*i+1)+=1;        // casella a dx

                        if(*(punt+m*(i+1))!=-1)
                            *(punt+m*(i+1))+=1;        // casella sotto

                        if(*(punt+m*(i+1)+1)!=-1)
                            *(punt+m*(i+1)+1)+=1;    // casella sotto a dx
                    }
                }
                else if(j==m-1){                // SE LA MINA STA NELL'ULTIMA COLONNA
                    if(i==0){                    // se la mina è nell'angolo in alto a dx

                        if(*(punt+(m*i)+j-1)!=-1)        //casella a sx
                            *(punt+(m*i)+j-1)+=1;

                        if(*(punt+(m*(i+1))+j)!=-1)        //casella in basso
                            *(punt+(m*(i+1))+j)+=1;

                        if(*(punt+(m*(i+1))+j-1)!=-1)        //casella in basso a sx
                            *(punt+(m*(i+1))+j-1)+=1;

                    }
                    else if(i==n-1){                    // angolo in basso a sx

                        if(*(punt+(m*(i-1))+j)!=-1)        // casella sopra
                            *(punt+(m*(i-1))+j)+=1;
                        
                        if(*(punt+(m*(i-1))+j-1)!=-1)    // casella sopra a sx
                            *(punt+(m*(i-1))+j-1)+=1;

                        if(*(punt+(m*i)+j-1)!=-1)        // casella a sx
                            *(punt+m*i+j-1)+=1;
                    }
                    else{                        // se la mina si trova sull'ultima colonna ma non negli angoli
                        if(*(punt+m*(i-1)+j)!=-1)    
                            *(punt+m*(i-1)+j)+=1;        // casella sopra
                        
                        if(*(punt+m*(i-1)+j-1)!=-1)    
                            *(punt+m*(i-1)+j-1)+=1;        // casella sopra a sx
                        
                        if(*(punt+m*i+j-1)!=-1)    
                            *(punt+m*i+j-1)+=1;            // casella a sx
                        
                        if(*(punt+m*(i+1)+j)!=-1)    
                            *(punt+m*(i+1)+j)+=1;        // casella sotto
                        
                        if(*(punt+m*(i+1)+j-1)!=-1)    
                            *(punt+m*(i+1)+j-1)+=1;        // casella sotto a dx
                    }
                }
                else{                            // SE LA MINA NON STA NÈ NELLA PRIMA NÈ NELL'ULTIMA COLONNA
                    if(i==0){                    // se la mina sta nella prima riga

                        if(*(punt+(i*m)+j-1)!=-1)        // la casella a sinistra
                            *(punt+(i*m)+j-1)+=1;

                        if(*(punt+(i*m)+j+1)!=-1)        // la casella a destra
                            *(punt+(i*m)+j+1)+=1;

                        if(*(punt+((i+1)*m)+j)!=-1)        // la casella a sotto
                            *(punt+((i+1)*m)+j)+=1;

                        if(*(punt+((i+1)*m)+j-1)!=-1)        // la casella a sotto a sx
                            *(punt+((i+1)*m)+j-1)+=1;

                        if(*(punt+((i+1)*m)+j+1)!=-1)        // la casella a sotto a dx
                            *(punt+((i+1)*m)+j+1)+=1;
                    }
                    else if(i==n-1){            // se la mina sta nell'ultima riga

                        if(*(punt+(i*m)+j-1)!=-1)        // la casella a sinistra
                            *(punt+(i*m)+j-1)+=1;

                        if(*(punt+(i*m)+j+1)!=-1)        // la casella a destra
                            *(punt+(i*m)+j+1)+=1;

                        if(*(punt+((i-1)*m)+j)!=-1)        // la casella a sopra
                            *(punt+((i-1)*m)+j)+=1;

                        if(*(punt+((i-1)*m)+j-1)!=-1)        // la casella a sopra a sx
                            *(punt+((i-1)*m)+j-1)+=1;

                        if(*(punt+((i-1)*m)+j+1)!=-1)        // la casella a sopra a dx
                            *(punt+((i-1)*m)+j+1)+=1;
                    }
                    else{                        // se la mina non sta su nessun "bordo"

                        if(*(punt+(i*m)+j-1)!=-1)        // la casella a sinistra
                            *(punt+(i*m)+j-1)+=1;

                        if(*(punt+(i*m)+j+1)!=-1)        // la casella a destra
                            *(punt+(i*m)+j+1)+=1;

                        if(*(punt+((i-1)*m)+j)!=-1)        // la casella a sopra
                            *(punt+((i-1)*m)+j)+=1;

                        if(*(punt+((i-1)*m)+j-1)!=-1)        // la casella a sopra a sx
                            *(punt+((i-1)*m)+j-1)+=1;

                        if(*(punt+((i-1)*m)+j+1)!=-1)        // la casella a sopra a dx
                            *(punt+((i-1)*m)+j+1)+=1;

                        if(*(punt+((i+1)*m)+j)!=-1)        // la casella a sotto
                            *(punt+((i+1)*m)+j)+=1;

                        if(*(punt+((i+1)*m)+j-1)!=-1)        // la casella a sotto a sx
                            *(punt+((i+1)*m)+j-1)+=1;

                        if(*(punt+((i+1)*m)+j+1)!=-1)        // la casella a sotto a dx
                            *(punt+((i+1)*m)+j+1)+=1;
                    }

                }
            }
        }
    }
}

bool check_coord(int *punt, char *punt2, int x, int y, int n, int m, int *cas_scoperte){
    char c='0';
    if(*(punt+(x*m)+y)==-1){
        return true;
    }
    else{
        c+=*(punt+(x*m)+y);
        *(punt2+(x*m)+y)=c;
        *cas_scoperte+=1;
        return false;
    }
} 
