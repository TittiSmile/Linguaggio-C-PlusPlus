
#include <cstdlib>
#include <iostream>
#include "MyHeader.h"
#define MAX 100

using namespace std;

int somma(int a, int b)
{
    return a+b;
    
}



void scambia1(int a, int b)
{
     //non scambia i valori originari...ma scambia le copie!!
   int temp=a;
   a=b;
   b=temp;  
}
void scambia(int* a, int* b)
{
     //  scambia i valori originari...nella RAM!
   
   int temp=*a;
  *a=*b;
   *b=temp;  
}

void SommaDifferenza(int a, int b, int* s, int* d)
{
     *s=a+b;
     *d=a-b;
     
}


int ContaPari(int v[], int dim)
{
     int conta=0; //tutti i contatori..devono essere inizializzati da zero!
     
     for(int i=0; i<dim; i++)
     if(v[i]%2==0)
     conta++;
     return conta;
    
}
void input(int v[], int dim)
{
     for(int i=0; i<dim; i++)
     {
          cout<<"inserire il valore "<<i<<" del vettore"<<endl;   
          cin>>v[i];
     }
     
     
}


void input1(int* v, int dim)
{
     for(int i=0; i<dim; i++)
     {
          cout<<"inserire il valore "<<i<<" del vettore"<<endl;   
          cin>>v[i];
     }
     
     
}
