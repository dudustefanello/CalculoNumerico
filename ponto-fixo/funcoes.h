#include "entrada.h"
#include <iostream>

#define _USE_MATH_DEFINES
#include <cmath>

typedef double (*funcoes)(double x);

double f1(double x){
  return cos(x);
}

funcoes funcao[] = {
  f1
};
