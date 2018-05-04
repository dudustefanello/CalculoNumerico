#include "entrada.h"
#include <iostream>

#define _USE_MATH_DEFINES
#include <cmath>

typedef struct funcao{
  int i;
  double (*funcao)(double x);
  char desc[100];
}funcao;

double  f0(double x){ // Lista 03, Exercício 01
  return sqrt(x) - cos(x);
}
double  f1(double x){ // Lista 03, Exercício 02
  return 3*(x + 1.0)*(x - 1.0/2.0)*(x - 1.0);
}
double  f2(double x){ // Lista 03, Exercício 03
  return pow(x, 4.0) - 2*pow(x, 3.0) - 4*pow(x, 2.0) + 4.0*x + 4.0;
}
double  f3(double x){ // Lista 03, Exercício 04
  return pow(x, 3.0) - 7*pow(x, 2.0) + 14.0*x - 6.0;
}
double  f4(double x){ // Lista 03, Exercício 05, a
  return x - pow(2.0, -x);
}
double  f5(double x){ // Lista 03, Exercício 05, b
  return pow(M_E, x) - pow(x, 2.0) + 3.0*x - 2.0;
}
double  f6(double x){ // Lista 03, Exercício 05, c
  return 2.0*x*cos(2*x) - pow((x + 1.0), 2.0);
}
double  f7(double x){ // Lista 03, Exercício 05, d
  return x*cos(x) - 2.0*pow(x, 2.0) + 3.0*x - 1.0;
}
double  f8(double x){ // Lista 03, Exercício 06, a
  return 3.0*x - pow(M_E, x);
}
double  f9(double x){ // Lista 03, Exercício 06, b
  return x + 3.0*cos(x) - pow(M_E, x);
}
double f10(double x){ // Lista 03, Exercício 06, c
  return pow(x, 2.0) - 4.0*x + 4.0 - log(x);
}
double f11(double x){ // Lista 03, Exercício 06, d
  return x + 1.0 - 2.0*sin(M_PI*x);
}
double f12(double x){ // Lista 03, Exercício 07
  return 2*sin(x) - x;
}
double f13(double x){ // Lista 03, Exercício 10
  return (x + 2.0)*pow((x + 1.0), 3.0)*x*pow((x - 1.0), 2.0)*(x - 2.0);
}
double f14(double x){ // Lista 03, Exercício 12
  return pow(x, 2.0) - 3;
}
double f15(double h){ // Lista 03, Exercício 19 e Prova 01, Questão 01
  return 10.0*(0.5*M_PI - asin(h) - h*pow((1.0 - h*h), 1.0/2.0)) - 12.4;
}

funcao funcoes[] = {
     0,  f0, "f(x) = sqrt(x) - cos(x)",
     1,  f1, "f(x) = 3(x + 1)(x - 1/2)(x - 1)",
     2,  f2, "f(x) = x^4 - 2x^3 - 4x^2 + 4x + 4",
     3,  f3, "f(x) = x^3 - 7x^2 + 14x - 6",
     4,  f4, "f(x) = x - x^-2",
     5,  f5, "f(x) = e^x - x^2 + 3x - 2",
     6,  f6, "f(x) = 2xcos(2x) - (x + 1)^2",
     7,  f7, "f(x) = xcos(x) - 2x^2 - 3x - 1",
     8,  f8, "f(x) = 3x - e^x",
     9,  f9, "f(x) = x + 3cos(x) - e^x",
    10, f10, "f(x) = x^2 - 4x + 4 - ln(x)",
    11, f11, "f(x) = x + 1 - 2sen(PIx)",
    12, f12, "p(x) = 2sen(x) - x",
    13, f13, "f(x) = (x+2)(x+1)^3*x(x-1)^2(x-2)",
    14, f14, "f(x) = x^2 - 3",
    15, f15, "f(h) = L * ((0.5 * PI) - arcsin(h) - h * (1 - h^2)^(1/2)) - V",
};
