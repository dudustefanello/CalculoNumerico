#include "funcoes.h"

int sinal(double y){
  if (y < 0) return -1;
  if (y > 0) return 1;
  return 0;
}

int iteracoes(double b, double a){
  return ceil((log10(b - a) - log10(EPSON)) / log10(2));
}

double bissecao(double b, double a, double (*funcao)(double)) {

  double c;

  int n = iteracoes(a, b);
  printf("%d Iteracoes\n", n);

  for (int i = 0; i <= n*2; i++) {
    c = a + (b - a) / 2;

    if (sinal(funcao(a)) * sinal(funcao(c)) < 0) b = c;
    else a = c;
  }

  return c;
}
