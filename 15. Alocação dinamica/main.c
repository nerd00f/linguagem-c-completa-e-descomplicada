#include <stdio.h>
#include <stdlib.h>

int main() {
  // alocando um array contendo cinco posições de inteiros: 5*sizeof(int)
  int *p;
  p = (int *)malloc(5 * sizeof(int));

  int i;
  for (i = 0; i < 5; i++) {
    printf("Digite o valor da posicao %d: ", i);
    scanf("%d", &p[i]);
  }

  // libera a memória alocada
  free(p);
  
  return 0;
}
