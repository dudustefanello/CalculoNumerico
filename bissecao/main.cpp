#include "bissecao.h"

using namespace std;

void imprimir(tipoEntrada i){
  retorno ret = bissecao(i.a, i.b, funcao[i.f - 1]);

  printf("Funcao %d: \n", i.f);
  printf("Intervalo: [%.3lf, %.3lf]\n", i.a, i.b);
  printf("Iteracoes: %d\n\n", ret.iteracoes);

  printf("x    = %.15lf\n", ret.y);
  printf("f(x) = %.15lf\n\n", funcao[i.f - 1](ret.y));
}

int main(int argc, char const *argv[]) {
  for (auto &i: entradas) imprimir(i);

  return 0;
}
