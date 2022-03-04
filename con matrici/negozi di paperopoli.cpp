#include <cstdlib>
#include <iostream>

#define MAX 100 //massimo numero di prodotti per negozio

using namespace std;

void input(int a[][10][110], int M);

int main()
{
    
    int a[MAX][10][110];
    int M,I;
    
    
    //la matrice individua i codice del prodotto, jnegozio, k, numero della strada e in  tale posizione c'è la 
    //quantità q di prodotto giacente in tale negozio nella tale strada
    
    cout<<"introdurre il numero massimo di prodotti per ogni magazzino...massimo "<<MAX<<endl;
    cin>>M;
    
     cout<<"introdurre la quantita' I"<<endl;
    cin>>I;
    
    input( a, M);
    
    /////////////////////
    for(int i=0;i<M;i++)
      for(int j=0; j<10;j++)
      
        {
         
           if( a[i][j][99]>I) cout<<"prodotto i="<<i<<" venduto nel negozio "<<j<<endl;  
               
               
               
        }
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

void input( int a[][10][110], int M)
{
     
     /*
     In una dichiarazione di funzione si possono anche mettere array multidimensionali come argomenti. La forma dell'argomento per un array tri-dimensionale è:

tipo_base [][d2][d3]
in cui devono essere specificate tutte le dimensioni ad esclusione della prima. Tale argomento ammette un qualsiasi array tridimensionale avente seconda e terza dimensione d2 e d3 prefissate e prima dimensione qualsiasi. Ad esempio: 
void procedura (int mioarray[][3][4])
     
     */
     
     for(int i=0;i<M;i++)
      for(int j=0; j<10;j++)
       for(int k=0;k<100;k++)
        {
           cout<<"inserire il prodotto codice "<<i<<" del negozio "<<j<<" della strada "<<k<<endl;
           cin>> a[i][j][k];   
               
               
               
        }
     
     
     
}
//int prodotti (int a[][10][100]);



