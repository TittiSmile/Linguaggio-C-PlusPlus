#include <stdio.h>
#include <stdlib.h>
#include <assert.h> //libreria facoltativa!!!

int main ()
{
    int *p1,*p2;
    int a,b;
    int somma=0;
    p1=(int*)malloc(sizeof(int));
    p2=(int*)malloc(sizeof(int));
    p1=&a;
    p2=&b;
    printf("inserisci la grandezza di 'a':   ");
    scanf("%d",&a);
    printf("inserisci la grandezza di 'b':   ");
    scanf("%d",&b);
    printf("la grandezza di 'a' e': %d   \n",*p1);
    printf("la grandezza di 'b' e':%d \n",*p2);
    printf("la loro somma e': %d",*p1+*p2);
    somma=*p1+*p2;                                               //passaggio facoltativo! 
    printf("\nsomma:  %d\n",somma);
    void free(void* p1);
    void free(void* p2);
    
   
    
    return 0;
}
