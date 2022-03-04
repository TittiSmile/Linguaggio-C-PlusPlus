#include <iostream>
#include <cstdlib>

using namespace std;

const int dim=10; //La dimensione è impostata globalmente per semplicità. Ovviamente, con le opportune dichiarazioni delle dimensioni, si può ampliare il main.

void unione(int A[dim], int B[dim]);

int main(){

  int A[dim], B[dim];

  cout<<"\n\tSequenza 1: "<<endl; //Sempliice inserimento dei valori
  for(int i=0; i<dim; i++)
  cin>>A[i];

  cout<<"\n\tSequenza 2: "<<endl;
  for(int i=0; i<dim; i++)
  cin>>B[i];

  unione(A, B);
  cout<<endl<<endl;
system("pause");
return 0;
}

void unione(int A[dim], int B[dim]){

  int dimT= dim+dim; //La dimensione dell'array UNIONE T[] è uguale alla somma degli array
  int T[dimT], k=0;

  for(int i=0; i<dim; i++){
  if(A[i]%2!=0){ // Questa condizione "scarta" i numeri pari. Senza questa condizione si ha un array unione completo di tutti gli elementi dei 2 array.
   T[k]=A[i];
   k++;
  }
 }
  for(int j=0; j<dim; j++){
  if(B[j]%2!=0){
   T[k]=B[j];
   k++;
  }
 }
  cout<<"\n\tL'unione e': \a"<<endl;
  for(int i=0; i<k; i++){ //Per la stampa la dimensione da tenere in considerazione è il numero degli elementi k
   cout<<T[i]<<endl;
   }
}
