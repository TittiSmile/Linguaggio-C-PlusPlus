/*
  Legge un intero da file,
controllando se l'apertura del file
ha dato errori.
*/

#include<stdlib.h>
#include<stdio.h>

int main() {
  FILE *fd;
  int x;


		/* apre il file, legge il numero, chiude */

  fd=fopen("intero.txt", "r");
  if( fd==NULL ) {
    perror("Errore in apertura del file");
    exit(1);
  }

  fscanf(fd, "%d", &x);

  fclose(fd);


		/* stampa il numero */

  printf("Il numero letto da file e' %d\n", x);

  return 0;
}
