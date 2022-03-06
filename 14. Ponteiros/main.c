#include <stdio.h>
#include <stdlib.h>

int main() {
  // Declara uma variável int contendo o valor 10
  int count = 10;

  // Declara um ponteiro para int
  void *p;

  // Atribui ao ponteiro o endereço da variável int
  p = &count;

  // Exibe valores das variaveis
  printf("%d\n", count);
  printf("%d\n", p);

  return 0;
}
