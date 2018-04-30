#include "entrada.h"
#include <iostream>

#define _USE_MATH_DEFINES
#include <cmath>

typedef struct funcao{
  int i;
  double (*funcao)(double x);
  char desc[100];
}funcao;

// Questão 1
double f1(double h){
  return 10 * ((0.5 * M_PI) - asin(h) - h * pow((1 - h * h), 1/2)) - 12.4;
}

double f2(double x){
  return x*x + log(x);
}

funcao funcoes[] = {
  0, f1, "f(x) = L * ((0.5 * PI) - arcsin(h) - h * pow((1 - h * h), 1/2)) - V",
  1, f2, "f(x) = x^2 + ln(x)"
};
