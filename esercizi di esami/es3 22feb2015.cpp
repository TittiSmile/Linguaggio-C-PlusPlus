#include <iostream>
#define MAX 100
using namespace std;
void acquisisci (int *n,int *m,char a[MAX]);
void stampa (int *n,int *m,char a[MAX]);
bool palindroma (int *n,int *m,char a[MAX]);

int main ()
{
    int n,m,p;
    char a[MAX];
    acquisisci(&n,&m,a);
    stampa(&n,&m,a);
    p=palindroma(&n,&m,a);
    if(p)
    {
        cout<<"la sequenza e' palindroma"<< endl;
    }
    else
    cout<<"la sequenza non e' palindroma"<< endl;    
    
    system ("PAUSE");
    return 0;
}

void acquisisci (int *n,int *m,char a[MAX])
{
    int i=0;
    do 
    {
        cout << "inserisci un numero "<< endl;
        cin >> *n;
        if (*n<1 || *n>MAX)
        cout << "errore"<< endl;
    }while (*n<1 || *n>MAX);
    
    do
    {
        cout << "inserisci un multiplo di "<< *n<< endl;
        cin >> *m;
        if (*m%*n!=0)
        cout << "errore"<< endl;
    }while (*m%*n!=0);
    
  
       cout<<"acquisizione vettore di caratteri"<< endl;
        for (int i=0;i<*m;i++)
        {
            cout <<"inserisci,qui di seguito, il "<< i+1<< " carattere: ";
            cin >> a[i];
        }
        
   
   
    
    
    
}

void stampa (int *n,int *m,char a[MAX])
{
     cout<<"\nil carattere acquisito e'" << endl;
    for(int i=0;i<*m;i++)
    {
        cout<< a[i];
    }
    cout<<endl<<endl;
    
}



bool palindroma (int *n,int *m,char a[MAX])
{
    bool pali=false;
    char parola[MAX];
    int i=0;
    parola[i]=a[MAX];
    int x=i;
    i=0;
    while(i<x/2 && parola[i]==parola[x-i-1])
    {
        i++;
    }
    if (i== x/2)
    {
        pali=true;
    }
  else
  {
      pali=false;
  }
  
  
  
  
  
  
  
  /*while (i<j)
    {
        
        
        if (a[i]!=a[j])
       {
           break;
       } 
        else
        {
              i+=*n;
              j-=*n;
        }
      
        cout<<a[i]<< a[j]<<"_____"<< endl;
        
        
    }
    if (i>j)
    pali=true;
    */ 
    
    
    
    return pali;
}







