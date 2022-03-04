#include <iostream>
#include <string.h>
using namespace std;


void acquisisci_carattere (int n,char m,char a[100]);
void nuovo (int n,int m,char a[100],char b[100]);

int main ()
{
    int n=0;
    char m;
    
    do
    {
        cout<<"quanto vuoi grande la stringa di caratteri?(maggiore di 4)"<< endl;
        cin>> n;
        if (n<4 || n>100)
        {
            cout<<"errore"<< endl;
        }
    }while(n<4 || n>100);
    
    char a[n],b[n];
    
    
    
    
    acquisisci_carattere(n,m,a);
    nuovo(n,m,a,b);
    cout<<b<<endl;
    
    system ("PAUSE");
    return 0;
}



void acquisisci_carattere (int n,char m,char a[100])
{
    cout<<"inserisci "<<n<<" caratteri MAIUSCOLI:"<< endl;
    for (int i=0;i<n;i++)
    {
            do
        {
           cout<<"inserisci il "<<i+1<< " carattere"<< endl;
           cin>> m;
            
            if(m<'A' || m>'Z')
            {
              cout<<"errore,devono essere MAIUSCOLI"<< endl;
            }
        }while( m<'A' || m>'Z');
        a[i]=m;
    
    }
}

void nuovo (int n,int m,char a[100],char b[100])
{
    int temp=0;
    int j=0;
    if(a[100]!= a[1])
    {
        b[j++]=a[100];
    }
    
    for (int i=1;i<n;i++)
    {
        if ((a[i]!= a[i+1]) && (a[i]!=a[i-1]))
        {
            b[j++]=a[i];
        }
    }
    if(a[100]==a[1])
    {
        b[j++]=a[100];
    }
    for (int i=1;i<n;i++)
    {
        if((a[i]==a[i+1]) || (a[i]==a[i-1]))
        {
            b[j++]=a[i];
        }
    }
    cout<<b<<endl;
    
}//funzione incerta.







































