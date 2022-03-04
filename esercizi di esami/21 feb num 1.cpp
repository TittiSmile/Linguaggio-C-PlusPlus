#include<iostream>
using namespace std;


void acquisisci (int* n,int* m, int matrice[][200] );
int riga_min(int n,int m, int matrice[][200]);
int riga_max(int n,int m,int matrice [][200]);
void scambia (int matrice[][200],int r1,int r2,int m);

int main ()
{
	int n1,m1; //grandezza righe e colonne 
	int i,j; //parametri per lo scambio di righe
	
	
	int matrice1[200][200];
	acquisisci(&n1,&m1, matrice1);
	
	cout<<"la matrice e'\n";
	 for ( i=0; i<n1;i++)
    {
    	for (j=0;j<m1;j++)
    	{
    	     cout <<matrice1[i][j]<<"\t";
			 	
		}
		cout<<endl;
	}
	
	i=riga_min(n1,m1,matrice1);
	j=riga_max(n1,m1,matrice1);
	
	cout<<"il min e' stato trovato nella riga:"<<i<<endl;
	cout<<"il max e' stato trovato nella riga:"<<j<<endl;
	cout<<"la matrice scambiata e'\n";
	
	
	
	scambia(matrice1,i, j , m1);
	
		cout<<"la matrice e'\n";
	 for ( i=0; i<n1;i++)
    {
    	for (j=0;j<m1;j++)
    	{
    	     cout <<matrice1[i][j]<<"\t";
			 	
		}
		cout<<endl;
	}
	
	
	
	
	cin>>i;
	
	return 0;
	
}




void acquisisci (int* n,int* m, int matrice[][200]  )
{
	
	do
	{
     	
		 
	cout <<"Inserisci dimensione della riga (min 2 max 100)"<<endl;
	cin >>*n;
	if  (*n<2 || *n>100)
	cout << "ERRORE"<< endl;
	
    } while (*n<2 || *n>100);
    
    
	do
	{
	cout <<"Inserisci dimensione della colonna (min 2 max 200)"<<endl;
	cin >> *m;
	if  (*m<2 || *m>100)
	cout << "ERRORE"<< endl;
	
    } while (*m<2 || *m>100);
    
    for (int i=0; i<*n;i++)
    {
    	for (int j=0;j<*m;j++)
    	{
    	     cout << "Inserisci l'elemento di posizione ["<<i<<"] ["<<j<<"]"<< endl;
    	     cin>> matrice[i][j];
			 	
		}
	}
    
}
int riga_min(int n,int m, int matrice[][200])
{
	int somma=0;
	int min=0;
	int i_min=0;
	
	for(int i=0;i<n;i++)
	{
		
		
		for(int j=0;j<m;j++) somma+=matrice[i][j]; //sommatoria riga i esima
		if(somma<min)
		{
         min=somma;            
         i_min=i;            
         }
         
         somma=0;
		
	}
	return i_min;
	
	
}



int riga_max(int n,int m,int matrice [][200])
{
    	int somma=0;
	int max=0;
	int i_max=0;
	
	for(int i=0;i<n;i++)
	{
		
		
		for(int j=0;j<m;j++) somma+=matrice[i][j]; //sommatoria riga i esima
		if(somma>max)
		{
         max=somma;            
         i_max=i;            
         }
         
         somma=0;
		
	}
	return i_max;
	
	
}

void scambia (int matrice[][200],int r1,int r2,int m)
{ 
     int temp;
	for (int j=0;j<m;j++ )
	{
		temp=matrice[r1][j]; //scambio le due righe max e min. r1 e r2 sono sono riga min e riga max 
		matrice[r1][j]=matrice[r2][j];
		matrice[r2][j]=temp;
		
	}
	
	
	
	
	
}


