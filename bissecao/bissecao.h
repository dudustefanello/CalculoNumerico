#include "funcoes.h"
#include "../comum.h"

typedef struct bissecao{
  int i;
  retorno (*metodo)(double a, double b, double (*funcao)(double));
  char desc[100];
}bissecao;

int sinal(double x1, double x2){
  if (x1 * x2 < 0) return -1;
  if (x1 * x2 > 0) return 1;
  return 0;
}

int iteracoes(double a, double b){
  return ceil((log10(b - a) - log10(EPSON)) / log10(2)) - 1;
}

retorno bissecaoEstimativa(double a, double b, double (*funcao)(double)) {
  retorno ret;
  double x;

  ret.y = 1;
  ret.iteracoes = iteracoes(a, b);

  for (int i = 0; i <= ret.iteracoes; i++) {
    x = ret.y;
    ret.y = a + (b - a) / 2;

    ret.erro = erro(ret.y, x);

    if (sinal(funcao(a), funcao(ret.y)) <= 0) b = ret.y;
    else a = ret.y;
  }
  return ret;
}

retorno bissecaoErro(double a, double b, double (*funcao)(double)) {
  retorno ret;
  double x;
  int sai = 0;

  ret.y = 1;

  for (ret.iteracoes = 0; 1; ret.iteracoes++) {
    x = ret.y;
    ret.y = a + (b - a) / 2;
    ret.erro = erro(ret.y, x);

    if (sai) break;
    if (fabs(funcao(ret.y)) < EPSON || ret.erro < EPSON) sai = 1;

    if (sinal(funcao(a), funcao(ret.y)) < 0) b = ret.y;
    else a = ret.y;
  }
  return ret;
}

bissecao bissecoes[] = {
  0, bissecaoEstimativa, "Com estimativa de iteracoes",
  1, bissecaoErro, "Com cálculo de erro por iteracao"
};
