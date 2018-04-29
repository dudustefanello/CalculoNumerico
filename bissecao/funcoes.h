#include "entrada.h"
#include <iostream>

#define _USE_MATH_DEFINES
#include <cmath>

typedef double (*funcoes)(double x);

// Questão 1
double f1(double h){
  double L = 10;
  double r = 1;
  double V = 12.4;

  return L * (0.5 * M_PI - pow(r,2) * asin(h / r) - h * pow((pow(r, 2), pow(h, 2)), 1 / 2)) - V;
}

// double f2(double x){
//   return 300 - ((0.25*32.17)/0.1)*x + ((0.25*0.25*32.17)/0.1*0.1)*(1-pow(M_E, (0.1*x/0.25)));
// }

funcoes funcao[] = {
  f1
};
