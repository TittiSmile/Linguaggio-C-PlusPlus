
#include <iostream>
using namespace std;

int     acquisisci_int();
void     acquisisci(int *punt, int n, int m);
void     procedura(int *punt1, int *punt2, int n, int m);

int main(){
    int n=acquisisci_int();
    int m=acquisisci_int();
    int A[n][m], B[m][n];

    int * puntA=&A[0][0];
    int * puntB=&B[0][0];
    cout<<"Inserisci la prima matrice:\n";
    acquisisci(puntA,n,m);
    cout<<"Inserisci la seconda matrice:\n";
    acquisisci(puntB,m,n);
    //bool trasposta=true;  //non mi serve più qui
    procedura(puntA,puntB,n,m);
    return 0;
}

int acquisisci_int(){
    int n;
    cout<<"Inserisci un intero maggiore o uguale a 2: ";
    do{
        cin>>n;
        if(n<2)
            cout<<"Errore! Riprova: ";
    }while(n<2);
    return n;
}

void acquisisci(int *punt, int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Inserisci l'elemento di indice ["<<i<<"]["<<j<<"]: ";
            cin>>*(punt+i*m+j);
        }
    }
}

void procedura(int *punt1, int *punt2, int n, int m){
    int k=0; //serve solo ad assicurare che la stampa "La matrice B non è trasposta.." venga effettuata una volta sola
    bool trasposta=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(*(punt1+i*m+j)!=*(punt2+j*n+i)){
                trasposta=false;
                if(k==0)
                    cout<<"\nLa matrice B non è la trasposta di A!\n";
                k++;
                cout<<"A["<<i<<"]["<<j<<"]="<<*(punt1+i*m+j)<<" è diverso da B["<<j<<"]["<<i<<"]="<<*(punt2+j*n+i)<<"\n";
            }
        }
    }
    if(trasposta)
        cout<<"\nLa matrice B è la trasposta di A\n\n";
}
 
