#include <iostream>
#include <cmath>

#include "entrada.h"

typedef double (*funcoes)(double x);

double f1(double x){
  return x - pow(2, -x);
}

double f2(double x){
  return pow(M_E, x) - pow(x, 2) + (3 * x) - 2;
}

double f3(double x){
  return 2 * x * cos(2 * x) - pow(x + 1, 2);
}

double f4(double x){
  return x * cos(x) - 2 * pow(x, 2) + 3 * x - 1;
}

funcoes funcao[] {
  f1, f2, f3, f4
};
