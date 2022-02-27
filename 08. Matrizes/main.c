#include <stdio.h>
#include <stdlib.h>

int main() {
  int mat[3][2];
  int i, j;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 2; j++) {
      printf("Digite o valor de mat[%d][%d] : ", i, j);
      scanf("%d", &mat[i][j]);
    }
  }
  
  return 0;
}
