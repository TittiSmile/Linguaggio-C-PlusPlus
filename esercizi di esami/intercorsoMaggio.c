#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100


 typedef     struct INFO
            {
               int codice;
               char nome[100];
               float prezzo;
               int npezzi;    
                   
            }info;

 void aggiorna(info ap[], info* st, int i); 
 info* duplicato(info* st); 



int main(int argc, char *argv[])
{
  
  info temp;
   info* p=NULL;
  info  ap[max];
  int i=0,j;
  

  
  
  
  //creo struct statica per provare la funzione duplicato
  temp.codice=1;
  strcpy(temp.nome,"Titti");
  temp.prezzo=3.14;
  temp.npezzi=10;
  printf("originale:\n codice=%d\n nome=%s\n prezzo=%f\n npezzi=%d\n\n",temp.codice,temp.nome,temp.prezzo,temp.npezzi);
  
  
  
  p= duplicato(&temp); //duplica temp in heap
   printf("ricevo dalla function l'indirizzo del duplicato%x\n",p);
  printf("duplicato:\n codice=%d\n nome=%s\n prezzo=%f\n npezzi=%d\n\n",p->codice,p->nome,p->prezzo,p->npezzi);
  
  //inserisco elemento nell'array;
  
  if(i<max) 
  {
            aggiorna(ap,p,i++);
            printf("la lista contiene:\n");
            for(j=0;j<i;j++) 
            printf(" codice=%d\t nome=%s\t prezzo=%f\n npezzi=%d\n\n",ap[j].codice,ap[j].nome,ap[j].prezzo,ap[j].npezzi);
  
            
  } 
  else printf("lista piena....\n");
  

  system("PAUSE");	
  return 0;
}

 info* duplicato(info* st)
{
      info* temp=NULL;
       temp=(info*)malloc(sizeof(info));
       
      
       printf("la funzione riceve\n");
       printf(" codice=%d\n nome=%s\n prezzo=%f\n npezzi=%d\n\n",st->codice,st->nome,st->prezzo,st->npezzi);
  
       
      
       temp->codice=st->codice;
        strcpy(temp->nome,st->nome);
      
       temp->prezzo= st->prezzo;
       temp->npezzi=st->npezzi;
      
        printf("ritorno al main....%x\n",temp);
   return temp;     
       
}
void aggiorna(info ap[], info* st, int i)
{



ap[i].codice=st->codice;   
   strcpy(ap[i].nome,st->nome);
   ap[i].prezzo= st->prezzo;
   ap[i].npezzi=st->npezzi;
   
      
}
