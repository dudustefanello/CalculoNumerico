#include <unistd.h>
#include <signal.h>
#include "ponto-fixo.h"

using namespace std;

FILE *arquivo;

void imprimir(tipoEntrada i){
  retorno ret = executar(i.x0, i.f);
  if (ret.iteracoes == 1000){
    fprintf(arquivo, "Função Fi %d (%s), não convergiu\n", i.f, funcoes[i.f].fi);
    fprintf(arquivo, "Original: %s.\n\n", funcoes[i.f].func);
    return;
  }
  fprintf(arquivo, "Fi %d (%s): \n", i.f, funcoes[i.f].fi);
  fprintf(arquivo, "Original: %s\n", funcoes[i.f].func);
  fprintf(arquivo, "x = %.8lf\n", ret.y);
  fprintf(arquivo, "Iteracoes: %d\n", ret.iteracoes);
  fprintf(arquivo, "Erro: %.8lf\n\n", ret.erro);
}

int main(int argc, char const *argv[]) {
  arquivo = fopen("saida.txt", "w");

  for (auto &i: entradas) imprimir(i);

  fclose(arquivo);

  kill(getppid(), SIGKILL);

  return 0;
}
