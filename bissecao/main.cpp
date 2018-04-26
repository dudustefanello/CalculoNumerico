#include "bissecao.h"

using namespace std;

void imprimir(double a, double b, int f){

  printf("Funcao %d: ", f);
  double y = bissecao(a, b, funcao[f - 1]);

  printf("x    = %.8lf\n", y);
  printf("f(x) = %.8lf\n", funcao[f - 1](y));
  printf("Intervalo: [%.1lf, %.1lf]\n\n", a, b);
}

int main(int argc, char const *argv[]) {

  for (auto &i: entradas)
    imprimir(i.a, i.b, i.f);

  return 0;
}
