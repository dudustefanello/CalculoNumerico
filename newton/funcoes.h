#include "entrada.h"
#include <iostream>



typedef struct funcoes {
  double (*funcao)(double x);
  double (*derivada)(double x);
}funcoes;

double f1(double x){
  return 1/2 + 1/4*x*x - x*sin(x) - 1/2*cos(2*x);
}
double d1(double x){
  return -1/2*(x - 2*sin(x)) * (2*cos(x)-1);
}

funcoes funcao[] = {
  f1, d1
};
