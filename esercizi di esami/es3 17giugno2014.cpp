#include <iostream>
#define MAX 100
using namespace std;

void acquisisci(int *n,char a[]);
int sostituisci (int n,char a[]);


int main ()
{
    int num=7;
    char A[7]={'a','a','A','b','c','d','c'};
    //acquisisci(&num,A);
    num=sostituisci (num,A);
 //for stampo il vettore modificato qui...
    cin>>num;
    return 0;
}

void acquisisci(int *n,char a[])
{
       do
    {
       cout << "Quanti caratteri vuoi digitare? (almeno 2)"<< endl;
       cin >> *n;
       if (*n<1)
       cout << "errore"<< endl; 
    }while (*n<1);
    
    cout << "inserisci "<< *n << " caratteri"<< endl;
    cin >>a[*n];
}

int sostituisci (int n,char a[])
{
    int k=0;//indice vettore temporaneo
    char Occorrenze[n], temp[n];
    int ContaOccorrenze[n];
    int trovato=0;
    
    //reset
    for (int i=0;i<n;i++) Occorrenze[n]='-';
    for (int i=0;i<n;i++) ContaOccorrenze[i]=0;
    
    
    for (int i=0;i<n;i++) //cerco carattere nel vett occorrenze
    {
       for (int j=0;j<n;j++) if(a[i]==Occorrenze[j])trovato=1;
       
       if(trovato==0) Occorrenze[k++]=a[i]; //se non c'è...lo scrivo
       trovato=0;
    }
    
    //////////////////conto le occorrenze////////////
    
    
   for (int i=0;i<k;i++) 
    {
              
            for (int j=0;j<n;j++)  if(a[j]== Occorrenze[i])ContaOccorrenze[i]++;
    }       
    
    cout<<"genero il vettore delle singole occorrenze"<<endl;
    for (int i=0;i<k;i++)cout<<Occorrenze[i]<<":"<<ContaOccorrenze[i]<<endl;
    
    //for su Occorrenze...if ContaOcc==1 scrivi la lettera nel vett temp, else *
    //copio temp su a
    
    return k;
}
