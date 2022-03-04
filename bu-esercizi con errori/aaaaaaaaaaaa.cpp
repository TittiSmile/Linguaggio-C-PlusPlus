
#include <iostream>
#include <cstdlib>    //per system();

#ifdef _WIN32        // per pulire il terminale sotto windows/posix
    #define pulisci(); system("cls");
#else //POSIX
    #define pulisci(); system("clear")
#endif

using namespace std;

int     acquisisci_dim();
bool     funzione(char A[],int dim);

int main(){
    pulisci();
    cout<<"Inserisci la dimensione del vettore di caratteri: ";
    int dim=acquisisci_dim()+1;
    char A[dim];                //dichiaro vettore di caratteri
    cout<<"Inserisci ora il vettore di "<<dim-1<<" caratteri:\n\n";
    for(int i=0;i<dim;i++){
        A[i]=cin.get();
    }
    cin.ignore(256,'\n');     //rimuovo eventuali caratteri in eccesso rimasti sullo stream
    pulisci();
    cout<<"Ecco il vettore di caratteri che ho acquisito:\n\n";
    cout<<A<<"\n\n";

    if(funzione(A,dim))
        cout<<"Ogni parola di A inizia con lo stesso carattere.\n";
    else
        cout<<"Non tutte le parole di A iniziano con lo stesso carattere.\n";

    return 0;

}

int acquisisci_dim(){
    int n;
    while(true){
        cin>>n;
        if(n>=2)
            break;
        else
            cout<<"Input non valido! Riprova: ";
    }
    return n;
}

bool funzione(char A[],int dim){
    int ind_iniziale=0;
    //con questo for determino il primo carattere che non sia di spaziatura (nel caso in cui i primi
    //caratteri del vettore fossero di spaziatura)
    for(int i=0;i<dim;i++){
        if(A[i]!=' ' && A[i]!='\t' && A[i]!='\n'){
            ind_iniziale=i;
            break;
        }
    }

    for(int i=ind_iniziale+1;i<dim-1;i++){
        if( (A[i]==' ' || A[i]=='\t' || A[i]=='\n') && A[i+1]!=A[ind_iniziale] )
            return false;
    }
    return true;
}
