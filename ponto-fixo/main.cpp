#include "ponto-fixo.h"

using namespace std;

void imprimir(tipoEntrada i){
  printf("Funcao %d: \n", i.f);
  printf("x = %lf\n", executar(i.x0, i.f));
  printf("%s\n\n", i.original);
}

int main(int argc, char const *argv[]) {
  for (auto &i: entradas) imprimir(i);
  return 0;
}
