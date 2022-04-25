#include <stdio.h>
#include <stdlib.h>

int main() {

  float f = 0.00000025;
  double d = 10.53;

  // forçar notação %e
  printf("Valor real : %e\n", f);
  printf("Valor real : %E\n", f);

  // o compilador decide %g
  // números muito grandes ou muito pequenos 
  // seram mostrados na forma de notação científica.
  printf("Valor real : %g\n", d);
  printf("Valor real : %G\n", f);

  return 0;

}
