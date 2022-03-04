
#include <stdio.h>

int main()
{
    int dimA=0, dimB=0;
    
    printf("Inserisci le lunghezze delle due sequenze\n");
    scanf("%d %d", &dimA, &dimB);
    
    int i=0, j=0;
    int A[dimA], B[dimB];
    
    printf("Inserisci la prima sequenza di interi ordinata in senso non decrescente\n");
    scanf("%d", &A[0]);
    for (i=1; i<dimA; i++) {
        scanf("%d", &A[i]);
        while (A[i]<A[i-1]) {
            printf("Errore! Inserisci un numero maggiore del precedente!\n");
            scanf("%d", &A[i]);
            }
        }
    
    printf("Inserisci la seconda sequenza di interi ordinata in senso non decrescente\n");
    scanf("%d", &B[0]);
    for (j=1; j<dimB; j++) {
        scanf("%d", &B[j]);
        while (B[j]<B[j-1]) {
            printf("Errore! Inserisci un numero maggiore del precendente!\n");
            scanf("%d", &B[j]);
            }
        }
    
    int dimC=dimA+dimB;
    int C[dimC];
    
    for (i=0; i<dimA; i++) {
        C[i]=A[i];
    }
    
    for (i=0, j=dimA; i<dimB; i++, j++) {
        C[j]=B[i];
    }
    
    for (i=0; i<dimC; i++) {
        for (j=i+1; j<dimC; j++) {
            if (C[j]>C[i]) {
                int temp;
                temp=C[i];
                C[i]=C[j];
                C[j]=temp;
            }
        }
    }
    
    for (i=0; i<dimC; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
