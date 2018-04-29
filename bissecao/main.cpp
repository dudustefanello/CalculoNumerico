#include "bissecao.h"

using namespace std;

void imprimir(tipoEntrada i){


  printf("Funcao %d: \n", i.f);
  double y = bissecao(i.a, i.b, funcao[i.f - 1]);
  printf("Intervalo: [%.3lf, %.3lf]\n\n", i.a, i.b);

  printf("x    = %.8lf\n", y);
  printf("f(x) = %.8lf\n\n", funcao[i.f - 1](y));

}

int main(int argc, char const *argv[]) {
  for (auto &i: entradas) imprimir(i);
  return 0;
}
