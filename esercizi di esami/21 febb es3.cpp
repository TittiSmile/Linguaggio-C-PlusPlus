#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;


int cerca (char s1[], char s2[]);

int main()
{
   
   char s1[28]="aa ciao come stai? ciaociao";
   char s2[5]="ciao";
  
  /* 
   puts("inserisci la priima stringa.."); //in luogo di cout
   gets(s1);//in luogo di cin
   puts(s1);
   */
   
   int cont=0;
   
   cont=cerca (s1,s2);
   cout<<"trovato:"<<cont<<endl;
   
   
    system("PAUSE");
    return 0;
}

int cerca (char s1[], char s2[])
{
    int cont=0,l1,l2,i,j,temp=0;
    
    l1=strlen(s1);
    l2=strlen(s2);
    
    cout<<"stringa 1 dim:"<<l1<<endl;
     cout<<"stringa 2 dim:"<<l2<<endl;
    
    for(i=0;i<l1;i++)
    {
      if(s1[i]==s2[0])  
      {
       for(j=1;j<l2;j++) if(s1[i+j]!=s2[j]) temp=1;
        if(temp==0)cont++;
        else
        temp=0;
       }             
    }
    
   return cont; 
}
