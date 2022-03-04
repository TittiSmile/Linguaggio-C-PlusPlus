#include <stdio.h>
#include <stdlib.h>

int *nuovoIntArray(int n);
float *nuovoFloatArray(int n);
char *nuovoCharArray(int n);

int main ()
{
    int I;
    float F;
    char C;
    *nuovoIntArray(I);
    *nuovoFloatArray(F);
    
    
    system("PAUSE");
    return 0;
}

int *nuovoIntArray(int n)
{
    int *array;
    int i=0;
    array=(int*)malloc(n*sizeof(int));
    printf("dimensioni array? (tipo int)   ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("inserisci elemento %d \t",i+1);
        scanf("%d",&array[i]);
        
    }
    for(i=0;i<n;i++)
    {
        printf("gli elementi dell'array sono: %d  \n",array[i]);
        
    }
    free(array);
    
}
float *nuovoFloatArray(int n)
{
    float *array;
    int i=0;
    array=(float*)malloc(n*sizeof(float));
    printf("dimensione array? (tipo float)   ");
    scanf("%f",&n);
    for(i=0;i<n;i++)
    {
        printf("cacca");
        printf("inserisci elemento %d \t",i+1);
        scanf("%f",&array[i]);
    }
     for(i=0;i<n;i++)
    {
        printf("gli elementi dell'array sono: %d  \n",array[i]);
        
    }
    
    free(array);
    //non sappiamo perchè crasha!!! ma va fatto così ^-^ 
    
    
    
    
    
}








