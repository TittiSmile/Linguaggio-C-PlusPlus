#include <stdio.h>

int main()
{
    int n, N, i = 0;
    printf("Inserisci un numero intero: ");
    scanf("%d", &N);
    printf("Inserisci una sequenza di numeri interi, terminata da 0:\n");
    do
    {
        scanf("%d", &n);
        if(n == N)
        {
            printf("Il numero %d è presente nella sequenza\n", N);
            i++;
        }
    }
    while(n != 0);
    if (i == 0)
        printf("Il numero %d non è presente nella sequenza\n", N);
    return 0;
}

