#include <stdio.h>
#include <stdlib.h>

struct cadastro {
  char nome[50];
  int idade;
  char rua[50];
  int numero;
};

int main() {
  // Lê do teclado uma string e armazena no campo nome
  struct cadastro c;

  // Leitura das variaveis (gets por ser string)
  gets(c.nome);
  scanf("%d", &c.idade);
  gets(c.rua);
  scanf("%d", &c.numero);

  return 0;
}
