#include <stdio.h>
#include <stdlib.h>

struct numero
{
   int x;
   int y;
   int a;
   int b;

    
};

int main ()
{
    int z;
    int w;
    struct numero n;
    struct numero *p;
    p=&n;
    printf("dammi due numeri da moltiplicare:    ");
    scanf("%d %d",&n.x,&n.y);
    z=(n.x)*(n.y);
    printf("il loro prodotto e':  %d ",z);
    printf("\ndammi due numeri da sommare:    ");
    scanf("%d %d",p->a,p->b);
    //w=(*p).a+(*p).b;
    w=(p->a)+(p->b);
    printf("la loro somma e':  %d ", w);
    ///////////////// non so perchè va a puttane il programma quando fa la somma -.- strunz
    
    return 0;
}
