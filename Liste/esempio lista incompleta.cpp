#include <stdio.h>
#include <stdlib.h>

typedef struct lista
{
    int info;
    struct  lista *next;
    
}lis;

void inserisciInTesta (struct lista *,int valore);
void inserisciInCoda   (struct lista *,int valore);
void inserisciInOrdine (struct lista *,int valore);
void StampaLista  (struct lista *);



int main ()
{
    lis* top;
    top=NULL;
    int a,scelta,i=0,numero;
    
    
    
    printf("Quanti elementi vuoi inserire?\n");
    scanf("%d",&a);
    printf("Come li vuoi inserire?\n1)in testa\t\t2)in coda\t\t3)in ordine\n\n");
    scanf("%d",&scelta);
    
    switch(scelta)
    {
        case 1:
            printf("Inserimento in testa\n");
            for (i=0;i<a;i++)
            {
                printf("inserisci elemento %d \t",i+1);
                scanf("%d",&numero);
            }
    }
    
    
    
    
    //creazione nuovo elemento.
   // lis*nuovo;
   // nuovo=(lis*)malloc(sizeof(lis));
    
     
    
    
    
    
    
    system("PAUSE");
    return 0;
}

void StampaLista  (struct lista *)
{
    struct lista *top;
    for (top=lista->next; top!=lista; top=top->next)
    
    
}












