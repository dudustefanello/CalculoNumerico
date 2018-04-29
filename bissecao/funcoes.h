#include "entrada.h"
#include <iostream>

#define _USE_MATH_DEFINES
#include <cmath>

typedef double (*funcoes)(double x);

// Questão 1
double f1(double h){
  return 10 * ((0.5 * M_PI) - asin(h) - h * pow((1 - h * h), 1/2)) - 12.4;
}

funcoes funcao[] = {
  f1
};
