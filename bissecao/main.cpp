#include "bissecao.h"

using namespace std;

void imprimir(tipoEntrada i, bissecao j){
  retorno ret = j.metodo(i.a, i.b, funcao[i.f]);

  printf("Funcao %d: (%s)\n", i.f, j.desc);
  printf("Intervalo: [%.3lf, %.3lf]\n", i.a, i.b);
  printf("Iteracoes: %d\n", ret.iteracoes);

  printf("x    = %.8lf\n", ret.y);
  printf("f(x) = %.8lf\n", funcao[i.f](ret.y));
  printf("Erro = %.8lf\n\n", ret.erro);
}

int main(int argc, char const *argv[]) {
  for (auto &i: entradas)
    for (auto &j: bissecoes)
      imprimir(i, j);

  return 0;
}
