#include "funcoes.h"
#include "../comum.h"

retorno executar(double x, int f){
  retorno ret;

  for (ret.iteracoes = 0; ret.iteracoes < 1000; ret.iteracoes++){
    ret.y = funcoes[f].funcao(x);

    ret.erro = erro(ret.y, x);
    if (ret.erro < EPSON) break;

    x = ret.y;
  }
  return ret;
}