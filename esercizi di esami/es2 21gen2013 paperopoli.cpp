#include <iostream>
#define M 100 //magazzini 
#define S 50 //scaffali 
#define B 80 //beni,quantità di roba
using namespace std;

void acquisisci (int m,int s,int b,int a[][S][M] );
void stampa (int m,int s,int b,int a[][S][M] );
int scaffali (int m,int s,int b,int a[][S][M] );
int medio_scaffale (int m,int s,int b,int a[][S][M] );

int main ()
{
    int m=3,s=2,b=1; //dovrebbero essere rispettivamente: 100,50,80 ma per semplificare usiamo 3 2 1 
    int a[80][50][100];
    int x=0;
    
                
    acquisisci(m,s,b,a);
    stampa(m,s,b,a);
    scaffali(m,s,b,a);
    x=medio_scaffale(m,s,b,a);
    cout<<"la media e' "<<x<< endl;
    
    system ("PAUSE");
    return 0;
}

void acquisisci (int m,int s,int b,int a[][S][M])
{
    for (int i=0;i<m;i++)
    
    {
        for (int j=0;j<s;j++)
        {
            for(int k=0;k<b;k++)
            {
                cout<< "acquisisci  il bene "<<k+1<<"\ndello scaffale "<<j+1<<"\nnel magazzino "<<i+1<< endl;
                cin >> a[i][j][k];
               
                
            }
        }
        
    }
    
}

void stampa (int m,int s,int b,int a[][S][M] )
{
    int q=0;
     for (int i=0;i<m;i++)
        for (int j=0;j<s;j++)
          for(int k=0;k<b;k++)
          {
             cout<<"\t*****BENI 'Q' *****"<<endl;
           //cout<<"beni che si trovano nello scaffale "<<j+1<<" del magazzino "<<i+1<<": "<<a[i][j][k]<<endl;
           do
                {
                    cout<<"acquisizione unita' di bene (da 0 a 10)"<< endl;
                    cin>>q;
                    if (q>0 && q<10)
                    {
                        cout<<"lo scaffale "<<j+1<<" del magazzino "<<i+1<<" ha " <<q<<" unita' di bene "<<k+1<<endl;
                    }
                    else if (q<0 || q>10)
                    {
                        cout<<"\t\t!!ERRORE!!"<<endl;
                    }
                    else
                     {
                         cout<<"lo scaffale "<<j+1<<" del magazzino "<<i+1<<" ha 0 unita' di bene "<<k+1<<endl;
                     }    //è un else facoltativo a mio avviso...
                    
                    
                }while (q<0 || q>10);
           
          }

}

int scaffali (int m,int s,int b,int a[][S][M] )
{
    int temp=0;
    for (int j=0;j<s;j++)
    {
        if(a[0][j][0]!=0)
        temp++;
        
    }
    if(temp)
        {
            cout<<"nel magazzino 3 ci sono "<<temp<<" scaffali con bene di 80"<<endl;
        }
        else
        {
            cout<<"non ci sono scaffali con unita' di bene 80"<<endl;
        }
    
}

int medio_scaffale (int m,int s,int b,int a[][S][M] )
{
    float media=0.0;

    for (int i=0;i<m;i++)
    {
        for(int j=0;j<s;j++)
        {
            media+=a[i][j][1];
        }
          media=(float)media/(float)s;
          cout<<"nel magazzino "<<i<<" e' presente la media di "<< media<< endl;
    }

    return media;
}














