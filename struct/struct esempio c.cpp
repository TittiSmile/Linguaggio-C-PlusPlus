#include <stdio.h>
#include <string.h>

struct studente 
{
  char nome[10];
  char cognome [20];
  short anni;     
} s;

int main ()
{
    
   printf("qual e' il nome?\n");
   scanf("%s",s.nome);   
   printf("Qual e' il cognome?\n");
   scanf("%s",s.cognome);
   printf("Qual e' l'eta'?\n");
   scanf("%d",&s.anni);

   
   printf("nome: %s\t\tcognome: %s\t\tanni: %d\t\t \n\n\n",s.nome,s.cognome,s.anni);
   
   /////////////////////////////////////////////////////////////
    //se vogliamo decidere noi nome,cognome ed anni:
    
    strcpy(s.nome,"lal");
    strcpy(s.cognome,"lol");
    s.anni=11;
    printf("dati di default:\n");
    printf("nome:   %s",s.nome);
    printf("\tcognome:   %s",s.cognome);
    printf("\t\tanni:   %d",s.anni);
   
   
   
   

    return 0;
} 
