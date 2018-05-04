#include "newton.h"

using namespace std;

void imprimir(tipoEntrada i){
  retorno ret = executar(i.x0, i.f);

  printf("x = %lf\n", ret.y);
  printf("Iteracoes: %d\n", ret.iteracoes);
  printf("Erro: %lf\n\n", ret.erro);
}

int main(int argc, char const *argv[]) {
  for (auto &i: entradas) imprimir(i);
  return 0;
}
