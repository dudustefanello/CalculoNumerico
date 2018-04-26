#include "funcoes.h"

using namespace std;


double f1(double x){
  return cos(x);
}
funcoes funcao[] = {
  f1
};

double executar(double x, int f){
  double y;
  while (1) {
    y = funcao[f - 1](x);
    if (abs((y - x) / y) < EPSON) break;
    x = y;
  }
  return y;
}

void imprimir(double x0, int f, char original[]){
  executar(x0, f);

  printf("%lf\n", funcao[f - 1](x0));
}

int main(int argc, char const *argv[]) {
 for (auto &i: entradas)
    imprimir(i.x0, i.f, i.original);
}
