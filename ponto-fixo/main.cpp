//#include "ponto-fixo.h"
#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

double f1(double x){
  return -sqrt(pow(M_E, x));
}

double f2(double x){
  return pow(x, 2)-pow(M_E, x);
}

int main(int argc, char const *argv[]) {
  // printf("%lf\n", f2(-1));
  // printf("%lf\n", M_E);

  double x = -1;

  for (int i = 0; i < 10; i++) {
    printf("%lf\n", f1(x));
    x = f1(x);
  }


  return 0;
}
