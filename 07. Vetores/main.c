#include <stdio.h>
#include <stdlib.h>

int main() {
  int notas[15];
  int i;
  
  for (i = 0; i <= 15; i++) {
    printf("Digite a nota do aluno %d: ", i);
    scanf("%d", &notas[i]);
  }

  return 0;
}
