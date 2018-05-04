#include <unistd.h>
#include <signal.h>
#include <stdio.h>
#include "bissecao.h"

using namespace std;

FILE *arquivo;

void imprimir(tipoEntrada i, bissecao j){
  retorno ret = j.metodo(i.a, i.b, funcoes[i.f].funcao);

  fprintf(arquivo, "Funcao %d: (%s)\n", i.f, funcoes[i.f].desc);
  fprintf(arquivo, "Metodo: %s)\n", j.desc);
  fprintf(arquivo, "Intervalo: [%.3lf, %.3lf]\n", i.a, i.b);
  fprintf(arquivo, "Iteracoes: %d\n", ret.iteracoes);
  fprintf(arquivo, "x    = %.8lf\n", ret.y);
  fprintf(arquivo, "f(x) = %.8lf\n", funcoes[i.f].funcao(ret.y));
  fprintf(arquivo, "Erro = %.8lf\n\n", ret.erro);
}

int main(int argc, char const *argv[]) {
  arquivo = fopen("saida.txt", "w");
  fprintf(arquivo, "Epson: %lf\n\n", EPSON);

  for (auto &i: entradas)
    for (auto &j: bissecoes)
      imprimir(i, j);

  fclose(arquivo);

  //kill(getppid(), SIGKILL);

  return 0;
}
