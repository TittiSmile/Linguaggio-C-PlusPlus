#include <iostream>
using namespace std;
float media (int m[][100],int n);          //per il passaggio di indirizzo di memoria,si lascia la prima parentesi quadra vuota!
void inserimento (int m[][100],int n);
int somma (int m[][100],int n);
int main ()
{
  int a[100][100];
  int c;
  do 
  {
      cout << "Quanto vuoi grande la matrice? " << endl;
      cin >> c;
      if (c<2 || c>100)
      {
          cout << "Errore! Riprovare"<< endl;
      }
  }while (c<2 || c>100);
  cout << "\t\tInseriamo la matrice\n";
  inserimento(a, c);
  int in;
  in=somma(a,c);
  cout << "\n\nLa matrice e' " << endl;
       for (int i=0;i<c;i++)
    {
        cout << "\n";
        for (int j=0;j<c;j++)
        {
             cout << a[i][j] << "\t";
        }
    } 
  if (in==-1)
  {
      cout << "\nNon esistono righe con somma nulla" << endl;
  }
  else 
  {
      cout << "\nLa somma degli elementi della riga " << in+1 <<" e' nulla" << endl;
  }
  cout << "La media della diagonale e' " << media(a,c) << endl;
  
    
    return 0;
}

void inserimento (int m[][100],int n)
{
  for (int i=0;i<n;i++)
  {
    for (int j=0;j<n;j++)
    {
      cout << "Inserisci l'elemento di posizione [" << i << "] [" << j << "] :   ";
      cin >> m[i][j];  
    }  
  }  
}

float media (int m[][100],int n)
{
  int sum=0;
  float med;
  int i;
  
  
  for (int i=0;i<n;i++)
  {
    sum+=m[i][i];  //in questo caso righe e colonne sono uguali e quindi il contatore del for sarà unico poichè la matrice è quadrata. avremmo potuto mettere un altro ciclo for con un altro contatore per le colonne ma sarebbe stato inutile. se righe e colonne hanno grandezze diverse è OBBLIGATORIO scrivere due cicli for.
  }
    med=(float)sum/n;
    return med;
    
}

int somma (int m[][100],int n)
{
  int somma =0,i=0;

   while(i<n)

   {
       for(int j=0; j<n; j++)
        {
          somma+=m[i][j];
        }
            if(somma==0)
              {
                return i;
              }
                  else
                 {
                    somma=0;
                    i++;
                 }
  }
  if(i>=n){return -1;}
    
}
