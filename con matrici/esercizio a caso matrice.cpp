#include <iostream>

using namespace std;
/*
Si progetti ed implementi in C/C++ un algoritmo che, presi in input due numeri interi 2 = n = 100 e 2 = m = 200 ,
1. acquisisca da standard input gli elementi (numeri interi) di un vettore bidimensionale A (matrice) di dimensione n × m;
2. invochi una funzione che restituisca al programma principale l’indice della prima riga r ? {0, . . . , n - 1} di A,
 che contiene tutti elementi negativi, oppure -1 se tale riga non esiste;
3. invochi una funzione che restituisca al programma principale la media aritmetica dei valori positivi memorizzati nelle colonne dispari.
*/
   
/*
int fux (int v[][dim_2],int &t,int &u)
{
float media=0;
int somma=0;
for (int i=0;i<t;i++)
{
 for (int j=0;j<u;j++)
 {
    somma+=v[i][j];
 }
}

for (int i=0;i<t;i++)
for (int j=0;j<u;j++)
n++;
media=(float)somma/n;

}
*/




#define dim_1 100
#define dim_2 200

int funz_negativ(int v[][dim_2],int &t, int &u){
    int cont=0;
    int not_exist=-1;
    for(int i=0;i<t;i++){
     cont=0;
      for(int k=0;k<u;k++){
        if(v[i][k]<0)
           cont++;
        if(k==u-1 && cont==u)
             return i;
             
    } }
    return not_exist;
    
    
    }
void funz(int v[][dim_2],int &t, int &u){
    int somma=0;
    int media;
    for(int i=0;i<u;i++){
      somma=0;
      media=0;
       for(int k=0;k<t;k++){
         if(i%2!=0 && i!=0){
           somma+=v[k][i];
           if(k==t-1){
             media=somma/t;
             cout<<"\nla media della colonna "<<i<<" e' "<<media<<endl; 
          }
        }
     }}
     return;
    }

    
int main(){
    int a[dim_1][dim_2];
    int n,m;
    
    do{
       cout<<"inserisci la dimensione della matrice nXm"<<endl;
         cin>>n>>m; 
        
    }
    while(n<2 || n>100 || m<2 || m>200);
    a[n][m];
    
    for(int i=0;i<n;i++){
      for(int k=0;k<m;k++){
        cout<<"inserisci l'elemento ["<<i<<"]["<<k<<"]\n";
         cin>>a[i][k];
    } }
    
    for(int i=0;i<n;i++){
     cout<<endl;
      for(int k=0;k<m;k++){
       cout.width(4);
        cout<<a[i][k];
    } }
    int indice=funz_negativ(a,n,m);
    cout<<indice<<endl;
    funz(a,n,m);
    
    
    
    system ("Pause");
    system ("Pause");
    system ("Pause");
    system ("Pause");
    return 0;
    
    }
