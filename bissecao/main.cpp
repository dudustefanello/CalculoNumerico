#include "bissecao.h"

using namespace std;

void imprimir(tipoEntrada i, bissecao j){
  retorno ret = j.metodo(i.a, i.b, funcoes[i.f].funcao);

  printf("Funcao %d: (%s, %s)\n", i.f, funcoes[i.f].desc, j.desc);
  printf("Intervalo: [%.3lf, %.3lf]\n", i.a, i.b);
  printf("Iteracoes: %d\n", ret.iteracoes);

  printf("x    = %.8lf\n", ret.y);
  printf("f(x) = %.8lf\n", funcoes[i.f].funcao(ret.y));
  printf("Erro = %.8lf\n\n", ret.erro);
}

int main(int argc, char const *argv[]) {
  for (auto &i: entradas)
    for (auto &j: bissecoes)
      imprimir(i, j);

  return 0;
}
