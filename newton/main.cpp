#include "newton.h"

using namespace std;

void imprimir(tipoEntrada i){
  printf("Funcao %d: \n", i.f);
  printf("x = %lf\n", executar(i.x0, i.f));
}

int main(int argc, char const *argv[]) {
  for (auto &i: entradas) imprimir(i);
  return 0;
}
