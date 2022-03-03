#include <stdio.h>
#include <stdlib.h>

int Fibonacci(int n) {
 if (n == 0 || n == 1)
  return n;
 else
  return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main() {
 Fibonacci(2);
 return 0;
}
