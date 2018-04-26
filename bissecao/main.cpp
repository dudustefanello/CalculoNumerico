#include "bissecao.h"

using namespace std;

void imprimir(tipoEntrada i){

  printf("Funcao %d: \n", i.f);
  double y = bissecao(i.a, i.b, funcao[i.f - 1]);

  printf("x    = %.8lf\n", y);
  printf("f(x) = %.8lf\n", funcao[i.f - 1](y));
  printf("Intervalo: [%.1lf, %.1lf]\n\n", i.a, i.b);
}

int main(int argc, char const *argv[]) {
  for (auto &i: entradas) imprimir(i);
  return 0;
}
