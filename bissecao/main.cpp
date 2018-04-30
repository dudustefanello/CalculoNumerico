#include "bissecao.h"

using namespace std;

void imprimir(tipoEntrada i){
  retorno ret = bissecao[0](i.a, i.b, funcao[i.f - 1]);

  printf("Funcao %d: \n", i.f);
  printf("Intervalo: [%.3lf, %.3lf]\n", i.a, i.b);
  printf("Iteracoes: %d\n\n", ret.iteracoes);

  printf("x    = %.15lf\n", ret.y);
  printf("f(x) = %.15lf\n", funcao[i.f - 1](ret.y));
  printf("Erro = %.15lf\n\n", ret.erro);

  ret = bissecao[1](i.a, i.b, funcao[i.f - 1]);

  printf("Funcao %d: \n", i.f);
  printf("Intervalo: [%.3lf, %.3lf]\n", i.a, i.b);
  printf("Iteracoes: %d\n\n", ret.iteracoes);

  printf("x    = %.15lf\n", ret.y);
  printf("f(x) = %.15lf\n", funcao[i.f - 1](ret.y));
  printf("Erro = %.15lf\n\n", ret.erro);
}

int main(int argc, char const *argv[]) {
  for (auto &i: entradas) imprimir(i);

  return 0;
}
