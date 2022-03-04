#include <stdio.h>
#include <stdlib.h>

struct carta
{
  char *figura;
  char *seme;
    
};

int main ()
{
    
    struct carta lolli;
    struct carta *punto;
    
    lolli.figura ="asso";
    lolli.seme = "cuori";
    
    punto=&lolli;
    
    
    printf ("accedo a struct col 1 caso!(caso base)\n\n %s%s%s\n",lolli.figura," di ",lolli.seme);
    printf ("\n\naccedo a struct col 2 caso!(tramite freccina ->)\n\n %s%s%s\n",punto->figura," di ",punto->seme);
    printf ("\n\naccedo a struct col 3 caso!(col puntatore)\n\n %s%s%s\n",(*punto).figura," di ",(*punto).seme);
    
    
    
    
    
    return 0;
}
