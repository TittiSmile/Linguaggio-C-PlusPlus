#include <iostream>
#define N 200
using namespace std;

void acquisisci (int *n,int a[][N]);
void stampa_matrice (int *n,int a[][N]);
int quadrato_magico(int *n,int a[][N]);

int main ()
{
    int num;
    int mat[N][N];
  do
  {
      cout << "*****QUADRATO MAGICO*****\nInserisci un numero N maggiore di 2"<< endl;
      cin >> num;
      if (num<2)
        cout << "Errore"<< endl;
  } while(num<2);  
    
    acquisisci(&num,mat);
    stampa_matrice(&num,mat);
    if(quadrato_magico(&num,mat)==1)cout<<("\n magica\n");
    else 
    cout<<"\n no magic!\n";
    
    
    
    
    system ("PAUSE");
    return 0;
    
}

void acquisisci (int *n,int a[][200])
{
    for (int i=0;i<*n;i++)
    {
        for (int j=0;j<*n;j++)
        {
            cout << "inserisci l'elemento di posizione ["<<i<< "]["<<j<<"]:  "<< endl;
            cin >> a[i][j];
        }
    }
}

void stampa_matrice (int *n,int a[][N])
{
    cout << "la matrice e'"<< endl;
    for (int i=0;i<*n;i++)
    {
        cout << "\n";
        for (int j=0;j<*n;j++)
        {
            cout << "\t"<<a[i][j];
            
        }
    }
    
    
}
int quadrato_magico(int *n,int a[][N])
{
    int somma_r=0,somma_c=0,somma_dp=0,somma_ds=0, temp;
    int quad=1;
     //////////////verifica righe
    somma_r=0; //solo pla prina somma
    
    for(int i=0;i<*n;i++)
    {
            
            temp=0;  //aggornato di riga in riga
        for (int j=0;j<*n;j++)
        {
            temp+=a[i][j]; //somma iesima riga...
                        
        }
        cout<<endl<<"somma riga "<<i<<":"<<temp<<endl;
        if(somma_r==0) somma_r=temp; 
        
        if(somma_r!=temp)
        { 
          quad=0;
          cout <<"errore riga\n";
          }
    }
    //se sono qui...le righe hanno passato il controllo 
    
    cout<<"verifica righe...ok\n";
    
    //////////////verifica colonne //////////////////////
    somma_c=0; //solo pla prina somma
    
    for(int j=0;j<*n;j++)
    {
            
            temp=0;  //aggornato di colonna in colonna
        for (int i=0;i<*n;i++)
        {
            temp+=a[i][j]; //somma iesima colonna...
                        
        }
        
         cout<<endl<<"somma colonna "<<j<<":"<<temp<<endl;
        if(somma_c==0) somma_c=temp; 
        
          if(somma_c!=temp)
        { 
          quad=0;
          cout <<"errore colonna\n";
          }
    }
    //se sono qui...le righe hanno passato il controllo 
     cout<<"verifica colonne...ok\n";
    
    
        if (somma_c!=somma_r)//se la sommatoria rihge è diversa da sommatoria colonne
           {
               
               quad=0;
               cout <<"errore somma righe diversa da somma colonna\n";
               return  quad;
           }
   
    cout<<"verifica somma righe = somma colonna ...ok\n";
    //////////diagonale princ
    
    
    for (int i=0;i<*n;i++)
    {
       
                somma_dp+=a[i][i];
          
    }
 
 
        if (somma_c!=somma_dp)//se la sommatoria rihge è diversa da sommatoria diag pinc
           {
                quad=0;
               cout <<"errore somma righe e somma colonna...diverse da somma diag princ\n";
               return  quad;
           }

cout<<"verifica somma righe = somma colonna = diag princ...ok\n";
 ////////////////diag secondaria////////////////////
 
   for(int i=0;i<*n;i++)
   {
      //cout<<"a["<<i<<"]["<<*n-i-1<<"]="<<a[i][*n-i-1]<<endl;
               somma_ds+=a[i][*n-i-1];
       
   }
 
 cout<<"diag sec:"<<somma_ds<<endl;
 
  if (somma_c!=somma_ds)//se la sommatoria rihge è diversa da sommatoria diag pinc
           {
                quad=0;
                cout <<"errore somma righe e somma colonna e somma diag princ...diverse da somma diag sec\n";
               return  quad;
           }
 
 
 cout << "\nSomma elementi sulle righe= "<< somma_r<<"\nSomma elementi sulle colonne= "<<somma_c<<"\nSomma elementi sulla diagonale principale= "<<somma_dp<<"\nSomma elementi sulla diagonale secondaria= "<<somma_ds<<endl;
  
   
   
   
   
   return quad;  
}
 


