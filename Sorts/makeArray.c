#include <stdio.h>
#include <stdlib.h>

int *makeArray(int qtd) {
  int i = 0;
  int *r = malloc(qtd * sizeof(int));

  for(i = 0; i < qtd; i++) {
    r[i] = rand() % 200;
  }

  return r;
}

int *copyArray(int *arrOG, int qtd) {
  int i = 0;
  int *r = malloc(qtd * sizeof(int));

  for(i = 0; i < qtd; i++) {
    r[i] = arrOG[i];
  }

return r;
}