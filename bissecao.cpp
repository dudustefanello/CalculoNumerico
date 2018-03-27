#include <stdio.h>
#include <math.h>

int nmax;

double a = 0.000000;
double b = 1.000000;

double f(double x){
      return (x - (pow(2,-x)));
}

int sgn(double y){
      if (y < 0) return -1;
      if (y > 0) return 1;
      return 0;
}

double bissecao(int max) {
      double c;
      for (int i = 0; i <= max; i++) {
            c = (a + b) / 2;
            if (sgn(a) * sgn(c) < 0) b = c;
            else a = c;
      }
      return c;
}

int iteracoes(){
      return ceil((log10(b-a)-log10(pow(10,-5))/log10(2)));
}

int main(int argc, char const *argv[]) {
      printf("%d\n", iteracoes());
      double i = bissecao(iteracoes());
      printf("x = %lf, f(x) = %.10lf\n\n", i, fabs(f(i)));
      return 0;
}
