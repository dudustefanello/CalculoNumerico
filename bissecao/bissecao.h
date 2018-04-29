#include "funcoes.h"

typedef struct retorno{
  double y, erro;
  int iteracoes;
}retorno;

int sinal(double x1, double x2){
  if (x1 * x2 < 0) return -1;
  if (x1 * x2 > 0) return 1;
  return 0;
}

int iteracoes(double b, double a){
  return ceil((log10(b - a) - log10(EPSON)) / log10(2));
}

retorno bissecao1(double b, double a, double (*funcao)(double)) {
  retorno ret;

  ret.iteracoes = iteracoes(a, b);

  for (int i = 0; i <= ret.iteracoes; i++) {
    ret.y = a + (b - a) / 2;
    if (sinal(funcao(a), funcao(ret.y)) <= 0) b = ret.y;
    else a = ret.y;
  }
  return ret;
}
