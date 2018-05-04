#include "funcoes.h"

double executar(double x, int f){
  double y;
  int i;
  for (i = 0; 1; i++){
    y = funcao[f - 1](x);
    if (abs((y - x) / y) < EPSON) break;
    x = y;
  }
  printf("%d Iteracoes\n", i);
  return y;
}
