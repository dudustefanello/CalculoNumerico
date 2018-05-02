#include "ponto-fixo.h"

using namespace std;

void imprimir(tipoEntrada i){
  retorno ret = executar(i.x0, i.f);
  if (ret.iteracoes == 1000){
    printf("Função Fi %d não convergiu\n\n", i.f);
    return;
  }
  printf("Fi %d: \n", i.f);
  printf("Original: %s\n", funcoes[i.f].func);
  printf("Fi:       %s\n", funcoes[i.f].fi);
  printf("x = %lf\n", ret.y);
  printf("Iteracoes: %d\n", ret.iteracoes);
  printf("Erro: %lf\n\n", ret.erro);
}

int main(int argc, char const *argv[]) {
  for (auto &i: entradas) imprimir(i);
  return 0;
}
