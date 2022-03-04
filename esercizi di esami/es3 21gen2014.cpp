#include <iostream>
#define MAX 100
using namespace std;
void acquisisci (int* n,int* m,int a[]);
bool medio (int n,int m,int a[]);

int main ()
{
    int n=0,m=0,a1[MAX];
    acquisisci(&n,&m,a1);
    
    if (medio(n,m,a1))
    cout << "medie uguali per tutti gli elementi"<< endl;
    else 
    cout << "medie diverse"<< endl;
    
        
    system("PAUSE");
    return 0;
}

void acquisisci (int* n,int* m,int a[])
{
    do
    {
    
        cout << "inserisci un numero intero n maggiore o uguale di 1"<< endl;
        cin >> *n;
        if (*n<1 || *n>MAX)
        cout << "errore"<<endl;
    }while (*n<1 || *n>MAX);
    
    do
    {
        cout << "inserisci un multiplo m di "<< *n <<" "<< endl;
        cin >> *m;
        if (*m%*n!=0)
        cout << "errore"<< endl;
    }while (*m%*n!=0);
    
    cout << "***acquisizione del vettore***\n\n "<< endl;
    for (int i=0;i<*m;i++)
    {
        cout << "inserisci un valore per la posizione "<< i+1 << endl;
        cin >> a[i];
    }
    
}

bool medio (int n,int m,int a[])
{
    
    int somma=0, conta=0;
    float media=0.0, media_prec=0.0;
    bool ok =true;
    
    
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n;j++)
        {
            somma+=a[j+i*n]; //j è l'indice e i*n è lo spiazzamento
            cout<<a[j+i*n]<<"-";
            
        }
          
          if(media==0.0)//primo gruppo
          {
              media=(float)somma/(float)n;
              cout<<"media:"<<media<<endl;
              cout<<"____"<<endl;
              media_prec=media; //valorizza la media precedente
          }
          else
          {
              media=(float)somma/(float)n;
              cout<<"media:"<<media<<endl;
              cout<<"____"<<endl; 
              if(media_prec!=media) ok=false; 
          }
          
          somma=0;
          
    
    }
    
   
      return ok;
}


