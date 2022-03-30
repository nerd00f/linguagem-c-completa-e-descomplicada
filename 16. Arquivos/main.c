#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  FILE *file;
  char string[100];

  // cria um arquivo.txt
  file = fopen("arquivo.txt","w");
  if (file == NULL) {
    printf("Erro na abertura do arquivo");
    exit(1);
  }

  // Le o que sera escrito no arquivo
  printf("Entre com a string a ser gravada no arquivo: ");
  gets(string);

  // Grava a string, caractere a caractere
  int i;
  for (i = 0; i < strlen(string); i++)
    fputc(string[i], file);

  // Fecha arquivo e encerra o programa
  fclose(file);
  return 0;
}
