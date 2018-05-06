// #include "newton.h"
//
// using namespace std;
//
// void imprimir(tipoEntrada i){
//   retorno ret = executar(i.x0, i.f);
//   if (ret.iteracoes == 1000){
//     printf("Função Fi %d não convergiu\n\n", i.f);
//     return;
//   }
//   printf("Fi %d: \n", i.f);
//   printf("Original: %s\n", funcoes[i.f].func);
//   printf("Fi:       %s\n", funcoes[i.f].fi);
//   printf("x = %lf\n", ret.y);
//   printf("Iteracoes: %d\n", ret.iteracoes);
//   printf("Erro: %lf\n\n", ret.erro);
// }
//
// int main(int argc, char const *argv[]) {
//   for (auto &i: entradas) imprimir(i);
//   return 0;
// }

#include <stdio.h>
#define _USE_MATH_DEFINES
#include <cmath>

double f1(double x){
  return x*x*x - 2*x*x - 5;
}
double d1(double x){
  return 3*x*x - 4*x;
}

double f2(double x){
  return x*x*x + 3*x*x - 1;
}
double d2(double x){
  return 3*x*x + 6*x;
}

double f3(double x){
  return x - cos(x);
}
double d3(double x){
  return 1 - sin(x);
}

double f4(double x){
  return x - 0.8 - 0.2*sin(x);
}
double d4(double x){
  return 1 - 0.2*cos(x);
}

int main(int argc, char const *argv[]) {
  double y, x = 1;
  for (size_t i = 0; i < 5; i++) {
    y = x - f1(x)/d1(x);
    printf("1 %lf\n", x);
    x = y;
  }

  for (size_t i = 0; i < 5; i++) {
    y = x - f2(x)/d2(x);
    printf("2 %lf\n", x);
    x = y;
  }

  for (size_t i = 0; i < 5; i++) {
    y = x - f3(x)/d3(x);
    printf("3 %lf\n", x);
    x = y;
  }

  for (size_t i = 0; i < 5; i++) {
    y = x - f4(x)/d4(x);
    printf("4 %lf\n", x);
    x = y;
  }
  return 0;
}
