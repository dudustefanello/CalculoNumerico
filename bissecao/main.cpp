#include "bissecao.h"

using namespace std;

void imprimir(double a, double b, int m){

  double y = bissecao(a, b, funcao[m - 1]);

  printf("Função %d\n", m);
  printf("x    = %.10lf\n", y);
  printf("f(x) = %.10lf\n", funcao[m - 1](y));
  printf("Intervalo: [%.1lf, %.1lf]\n\n", a, b);
}

int main(int argc, char const *argv[]) {

  for (auto &i: entradas)
    imprimir(i.a, i.b, i.m);

  return 0;
}
