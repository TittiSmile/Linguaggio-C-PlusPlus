
/*
Si progetti ed implementi in C/C++ un algoritmo che, prese in input due sequenze di caratteri ordinate alfabeticamente, 
fornisca in output una sequenza di caratteri che sia data dalla fusione delle due sequenze in input e che preservi l’ordine alfabetico.
*/
#include <iostream>
 
using namespace std;

void p_crak(char D[],int &d){
     for(int i=0;i<d;i++){
       cin.get(D[i]);
          if(D[i]>='A' && D[i]<='Z')
             D[i]+=32;
          if(i>0 && i<d){
             if(D[i]==' '||D[i]<D[i-1]){
               cout<<"errore, carattere non valido, o non stanno messi in ordine crescente"<<endl;
               i=-1;
               fflush(stdin);
          } } }
          for(int i=0;i<d;i++)
             cout<<D[i];
             return;
             }

int main(){
    int a,b,c;
    do{
       cout<<"inserisci la lunghezza della prima stringa di caratteri"<<endl;
        cin>>a;
       cout<<"inserisci la lunghezza della seconda stringa di caratteri"<<endl;
        cin>>b;
    }
    while(a<2||b<2);
    c=a+b;
    char A[a],B[b],C[c];
    cout<<"inserisci una stringa di caratteri ordinati alfabeticamente di dimensione"<<a<<endl;
   
   p_crak(A,a);
     
    cout<<"\n\n";
    
    cout<<"inserisci una stringa di caratteri ordinati alfabeticamente di dimensione"<<b<<endl;
    p_crak(B,b);
    cout<<"\n\n";
    
    for(int i=0;i<c;i++){
      if(i<a)
         C[i]=A[i];
      else
         C[i]=B[i-a];
    }    
         cout<<"\n \n";
         for(int i=0;i<c;i++){
         cout<<C[i];
}
    
    
    
    
    
    system("pause");
    return 0;
    
    }


