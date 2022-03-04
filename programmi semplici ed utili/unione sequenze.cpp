#include <iostream>
#define dim 100
using namespace std;

void acquisisci(int n,int m,int a[dim],int b[dim]);
void unione (int n,int m,int a[dim],int b[dim]);

int main ()
{
    int n=0,m=0;
    int a[dim],b[dim];
    acquisisci(n,m,a,b);
    unione(n,m,a,b);

   
     
    system ("PAUSE");
    return 0;
}
void acquisisci(int n,int m,int a[dim],int b[dim])
{
    do
    {
        cout<<"quanti numeri vuoi acquisire per la sequenza A??"<< endl;
        cin>> n;
        if(n<0 || n>100)
        cout<<"errore"<< endl;
    }while(n<0 || n>100);
    
     do
    {
        cout<<"quanti numeri vuoi acquisire per la sequenza B??"<< endl;
        cin>> m;
        if(m<0 || m>100)
        cout<<"errore"<< endl;
    }while(m<0 || m>100);
    
    
    
    
    cout<<"\t\t***acquisizione sequenza numeri A***"<< endl;
    for (int i=0;i<n;i++)
    {
        cout<<"inserisci il "<<i+1<<" numero:   ";
        cin>> a[i];
    }
    cout<<"\t\t***acquisizione sequenza numeri B***"<< endl;
    for (int j=0;j<m;j++)
    {
        cout<<"inserisci il "<<j+1<<" numero:   ";
        cin>> b[j];
    }
    
}
void unione (int n,int m,int a[dim],int b[dim])
{ 
     int temp=0;
     int nc=n+m;
     int c[nc];
     
    
    for (int i=0; i<n; i++)
    {
       cout<<"stronzo di culo";
       if (a[i]%2!=0)  
       {
             c[temp]=a[i];
             temp++;
        }
    }
  
   for (int i=0; i<m; i++)
   {
        if (b[i]%2!=0)  
        {
             c[temp]=b[i];
             temp++;
         }
   } 
         
 for (int i=0; i<temp; i++)         
     cout<<c[i]<<" ";
    
    
    
    
   /*for (int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            cout<<"llll";
            c[temp]=a[i];
            temp++;
        }
    }
    
    
    for (int i=0;i<m;i++)
    {
        if(b[i]%2!=0)
        {
            cout<<"llll";
            c[temp]=b[i];
            temp++;
        }
    }
    cout<<"le sequenze unite sono "<<endl;
    for (int i=0;i<temp;i++)
    
        cout<<c[i]<< endl;
    */ 
    
 
 
 
}
 
 
//non capisco perchè non funziona.
