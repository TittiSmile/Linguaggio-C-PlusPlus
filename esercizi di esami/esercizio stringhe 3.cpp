#include <cstdlib>
#include <iostream>
#define n 100


using namespace std;


void input(char a[], int dim);
void f(char a[], char b[],int dim);


int main(int argc, char *argv[])
{
    
    int dim;
    char a[n], b[2*n];
   
    
    
    do
    {
     
    cout<<"inserire dimensioni effettive vettore di char...massimo:"<<n<<endl;               
    cin>>dim;
    
    }while(dim>n);
    
    input(a, dim);
     f(a,b,dim);
     cout<<"il vettore di char e'"<<endl;
     
     for (int i=0;i<2*dim;i++) cout<<b[i]<<"\t";
     cout<<endl;
     
    system("PAUSE");
    return EXIT_SUCCESS;
}

void input(char a[], int dim)
{
 
  for (int i=0;i<dim;i++)
  {
       cout<<"inserire il carattere "<<i<<" del vettore"<<endl;
       cin>>a[i];
  }
 }
void f(char a[], char b[],int dim)
{
 int j=0;
 
  for (int i=0;i<dim;i++) 
  {
  b[j++]=a[i];
  b[j++]=a[i];
  }
 
 
 }
