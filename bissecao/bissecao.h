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

int iteracoes(double a, double b){
  return ceil((log10(b - a) - log10(EPSON)) / log10(2)) - 1;
}

retorno bissecao1(double a, double b, double (*funcao)(double)) {
  retorno ret;

  ret.iteracoes = iteracoes(a, b);

  for (int i = 0; i <= ret.iteracoes; i++) {
    ret.y = a + (b - a) / 2;

    if (sinal(funcao(a), funcao(ret.y)) <= 0) b = ret.y;
    else a = ret.y;
  }
  return ret;
}

double erro(double a, double b){
  return fabs((a - b) / a);
}

retorno bissecao2(double a, double b, double (*funcao)(double)) {
  retorno ret;
  double x;
  ret.y = 1;

  for (ret.iteracoes = 0; 1; ret.iteracoes++) {
    x = ret.y;
    ret.y = a + (b - a) / 2;

    if (ret.y < EPSON) break;

    ret.erro = erro(ret.y, x);
    if (ret.erro < EPSON) break;

    if (sinal(funcao(a), funcao(ret.y)) < 0) b = ret.y;
    else a = ret.y;
  }
  return ret;
}
