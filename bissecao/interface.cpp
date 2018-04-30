#include "bissecao.h"

using namespace std;

void imprimirFuncoes(){
  printf("Funções Implementadas:\n");
  for (auto &i: entradas) printf("%2d. %s\n", i.f, funcoes[i.f].desc);
}

int escolhaFuncao(){
  int ret;
  printf("\nEscolha uma função: ");
  scanf("%d", &ret);
  return ret;
}

void escolhaIntervalo(double *a, double *b, int f){
  double r, s;
  printf("\nInforme o início do intervalo: ");
  scanf("%lf", &r);

  printf("\nInforme o final do intervalo: ");
  scanf("%lf", &s);

  if (fabs(r - s) < EPSON){
    printf("O intervalo usado sera o da implementacao.\n");
    *a = entradas[f].a;
    *b = entradas[f].b;
  }
  else{
    *a = r;
    *b = s;
  }
}

int escolhaMetodo(){
  int ret;
  printf("\nEscolha um Criterio de Parada:\n");
  for (auto &i: bissecoes) printf("%d. %s\n", i.i, i.desc);
  scanf("%d", &ret);
  printf("\n");
  return ret;
}

void imprimirResultado(int f, double a, double b, int m){
  retorno ret = bissecoes[m].metodo(entradas[f].a, entradas[f].b, funcoes[entradas[f].f].funcao);

  printf("Funcao %d: \n", entradas[f].f);
  printf("Intervalo: [%.3lf, %.3lf]\n", entradas[f].a, entradas[f].b);
  printf("Iteracoes: %d\n\n", ret.iteracoes);

  printf("x    = %.8lf\n", ret.y);
  printf("f(x) = %.8lf\n", funcoes[entradas[f].f].funcao(ret.y));
  printf("Erro = %.8lf\n\n", ret.erro);
}

int main(int argc, char const *argv[]) {
  int funcao, m;
  double a, b;

  imprimirFuncoes();
  funcao = escolhaFuncao();

  escolhaIntervalo(&a, &b, funcao);

  m = escolhaMetodo();

  imprimirResultado(funcao, a, b, m);

  return 0;
}
