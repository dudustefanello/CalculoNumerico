#include "entrada.h"
#include <iostream>

#define _USE_MATH_DEFINES
#include <cmath>

typedef struct funcoes {
  double (*funcao)(double x);
  double (*derivada)(double x);
}funcoes;

double f1(double x){
  return pow(x, 2) - 2;
}
double d1(double x){
  return 2 * x;
}

funcoes funcao[] = {
  f1, d1
};
