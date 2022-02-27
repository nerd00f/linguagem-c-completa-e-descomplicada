#include <stdio.h>
#include <stdlib.h>

int main() {
  char nome[30];
  printf("Digite um nome : ");

  gets(nome);
  printf("O nome digitado foi : %s\n", nome);

  return 0;
}

// definir limite de entrada
// fgets (variavel, limite, arquivo);
// ex: fgets (nome, 30, stdin);

// escrever em arquivo
// fputs (variavel, arquivo);

// pegar tamanho da variavel
// strlen(variavel)

// copiar variavel
// strcpy(destino, origem)

// ver se duas strings são iguais
// strcmp(str1, str2)
