#include <iostream>

#define _USE_MATH_DEFINES

#include <cmath>
#include <math.h>

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

double f5(double x){
  return 3 * x - pow(M_E, x);
}

double f6(double x){
  return x + 3 * cos(x) - pow(M_E, x);
}

double f7(double x){
  return pow(x, 2) - 4 * x + 4 - log(x);
}

double f8(double x){
  return x + 1 - 2 * sin(M_PI * x);
}

funcoes funcao[] {
  f1, f2, f3, f4, f5, f6, f7, f8
};
