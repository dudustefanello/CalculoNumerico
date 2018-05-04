#include "funcoes.h"

double executar(double x, int f){
  double y;
  int i;
  for (i = 0; 1; i++){
    y = x - (funcao[f - 1].funcao(x) / funcao[f - 1].derivada(x));
    if (fabs((y - x) / y) < EPSON)break;
    x = y;
  }
  printf("%d Iteracoes\n", i);
  return y;
}
