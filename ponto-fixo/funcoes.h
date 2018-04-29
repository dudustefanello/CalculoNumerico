#include "entrada.h"
#include <iostream>

#define _USE_MATH_DEFINES
#include <cmath>

typedef double (*funcoes)(double x);

double f1(double x){
  return 2 * (x - 5 * sin(x));
}

// double f2(double x){
//   return 300 - ((0.25*32.17)/0.1)*x + ((0.25*0.25*32.17)/0.1*0.1)*(1-pow(M_E, (0.1*x/0.25)));
// }

funcoes funcao[] = {
  f1
};
