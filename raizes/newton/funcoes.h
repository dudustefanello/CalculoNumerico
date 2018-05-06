#include "entrada.h"
#include <iostream>

typedef struct funcoes {
  double (*funcao)(double x);
  double (*derivada)(double x);
}funcoes;

double f1(double x){
  return 1/2 + (1/4)*x*x - x*sin(x) - (1/2)*cos(2*x);
}
double d1(double x){
  return x/2 - sin(x) + sin(2*x) + x*(-cos(x));
}

double f2(double x){
  return x*x - 6;
}
double d2(double x){
  return 2*x;
}

funcoes funcao[] = {
  f1, d1,
  f2, d2,
};
