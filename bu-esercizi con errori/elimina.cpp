#include <stdio.h>
#include<stdlib.h>

struct NodoLista {
  int val;
  struct NodoLista *next;
};

typedef struct NodoLista *TipoLista;


/*
  stampa di una lista di lunghezza generica
*/

void StampaLista(TipoLista l) {
  TipoLista s;

  s=l;
  while(s!=NULL) {
    printf("%d ", (*s).val);
    s=(*s).next;
  }

  printf("\n");
}


/*
  main
*/

int main() {
  TipoLista l;
  TipoLista s, t;

		/* creazione della lista (2 -9 1) */

  s=NULL;
  
  t=s;
  s=malloc(sizeof(struct NodoLista));
  (*s).val=1;
  (*s).next=t;
  
  t=s;
  s=malloc(sizeof(struct NodoLista));
  (*s).val=-9;
  (*s).next=t;
  
  t=s;
  s=malloc(sizeof(struct NodoLista));
  (*s).val=2;
  (*s).next=t;
  
  l=s;

		/* aggiunge l'elemento -5 in testa alla lista */

  t=malloc(sizeof(struct NodoLista));

  (*t).val=-5;
  (*t).next=l;

  l=t;
  

		/* aggiunge l'elemento 13 in testa alla lista */

  t=malloc(sizeof(struct NodoLista));

  (*t).val=13;
  (*t).next=l;

  l=t;

  
  		/* stampa la lista */

  StampaLista(l);

  return 0;
}
