#include <cstdlib>
#include <iostream>
#include "MyHeader.h"
#define MAX 100



using namespace std;

int main(int argc, char *argv[])
{
   
   int a,b,s; //dichiaro var locali al main
   
   //fase di input
   
   cout<<"inserire il valore"<<endl;
   cin>>a;
   
   cout<<"inserire il valore"<<endl;
   cin>>b;
   
   //fase di elaboraz
   
   s=somma(a,b); //invoco la funzione..."per valore"
   
   //fase di output..
   
   cout<<"la somma e'"<<s<<endl;
   
   
   
   //////////continuiamo///////////////////////
   
   
   cout<<"adesso scambio le due variabili dal main..."<<endl;
   
   int temp=a;
   a=b;
   b=temp;
   
   cout<<"ora le variabili sono  a:"<<a<<"  b:"<<b<<endl;
   
   //adesso voglio scambiarle di nuovo con una funz!!!
   
 scambia1(a, b);
    cout<<"ora le variabili sono  a:"<<a<<"  b:"<<b<<endl;
    
    ///non va....facciamolo per indirizzi...
    
    scambia(&a, &b); //passo gli indirizzi di a ed b
    cout<<"ora le variabili sono  a:"<<a<<"  b:"<<b<<endl;
    
    
    /*
    quando usare il passaggio per "riferimento"?
    1) se la function deve modificare i dati ricevuti
    2) se la function deve restituire più di un valore al chiamante...
    3) se la function deve ricevere in input una var stutturata (array)
    */////////////////////////////////////////////
    
    //caso 2)
    int d;
    
    SommaDifferenza(a, b, &s, &d);
    cout<<"somma:"<<s<<"  differenza:"<<d<<endl;
    
    //caso 3)
    
    int v[MAX], dim;
    
    cout<<"inserire dim effettive del vettore...massimo   "<<MAX<<endl;
    
    do
    {
    cin>>dim;
    if(dim>MAX || dim<0)cout<<"errore"<<endl;
     }
    while(dim>MAX || dim<0);
    
   int pari=0;
   
   input(v,  dim);
   
 pari= ContaPari(v, dim); //IL NOME DEL VETTORE E' L'INDIRIZZO DEL I° VALORE!!!

cout<<"i valori pari sono:"<<pari<<endl;   
   
   
   input(v,  dim);
   
   
   
    system("PAUSE");
    return EXIT_SUCCESS;
}

