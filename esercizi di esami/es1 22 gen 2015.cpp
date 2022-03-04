#include <iostream>
#define n 100
using namespace std;

bool triangolo (int a[][n],int b[][n],int dim);    //dim,in tutto il programma,è visto come n

int main ()
{
    int dim;
    int a [n][n];
    int b [n][n];
    
    do
    {
        cout << "inserisci un numero maggiore o uguale di 2 per la matrice quadrata"<< endl;
        cin >> dim;
        if (dim<2)
        {
            cout << "errore,riprova"<<endl;
        }
    }while (dim<2);
    
    
    cout << "\tMATRICE A:"<< endl;
    for (int i=0;i<dim;i++)
    {
        for (int j=0;j<dim;j++)
        {
            cout << "inserisci l'elemento di coordinata  ["<< i << "]["<<j<<"]:   ";
            cin >> a [i][j];
        }
    }
    cout << "\n\n\tMATRICE B:"<< endl;
    for (int i=0;i<dim;i++)
    {
        for (int j=0;j<dim;j++)
        {
            cout << "inserisci l'elemento di coordinata  ["<< i << "]["<<j<<"]:   ";
            cin >> b [i][j];
        }
    }
   bool ok;
   
   ok= triangolo (a,b,dim);
    if(ok)
    cout<<"true"<<endl;
    else
    cout<<"false"<<endl;
    
    system("pause");
    
    
    return 0;    
}

bool triangolo (int a[][n],int b[][n],int dim)
{
    bool funz=true;
    
    /*
    cout<<"il triangolo superiore della matrice A e':"<<endl;
    
    
    for (int i=0;i<dim;i++)
    {
        for(int j=0;j<dim-i;j++)
        {
           cout<<a[i][j]<<"\t";
               
        }
        cout<<endl;
    }
    
   */
   
    for (int i=0;i<dim;i++)
    {
        for(int j=0;j<dim-i;j++)
        {
         //verifica
         cout<<"verifico A["<<i<<"] ["<<j<<"] con B["<<dim-1-i<<"]["<<j+i<<"]"<<endl;
         if(a[i][j]!=b[dim-1-i][j+i]) 
         { 
          funz=false;
         cout<<"trovato diversita in  A["<<i<<"] ["<<j<<"] con B["<<dim-1-i<<"]["<<j+i<<"]"<<endl;
          }
               
        }
        
    }
   
   
    
    return funz;
    
    
    
}






