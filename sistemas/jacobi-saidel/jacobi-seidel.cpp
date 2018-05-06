#include "entrada.h"
#define _USE_MATH_DEFINES
#include <cmath>

FILE *arquivo;

double velhos[ordem];

int linhas(){
 double diagonal, soma;
 for (int i = 0; i < ordem; i++) {
   soma = 0;
   for (int j = 0; j < ordem; j++) {
     if (i = j) diagonal = abs(matriz[i][j]);
     else soma += abs(matriz[i][j]);
   }
   if (diagonal <= soma) return 0;
 }
 return 1;
}

int continuar(){
  for (int i = 0; i < ordem; i++)
    if (fabs(coeficientes[i] - velhos[i]) < epson)
      return 0;
  return 1;
}

int continuar2(){
  for (int i = 0; i < ordem; i++)
    if (fabs(coeficientes2[i] - velhos[i]) < epson)
      return 0;
  return 1;
}

void jacobi(){
  double soma, coeficiente;

  for (int i = 0; i < ordem; i++) velhos[i] = 0;

  do {
    for (int i = 0; velhos[i] = coeficientes[i], i < ordem; i++);

    for (int i = 0; i < ordem; i++) {
      coeficiente = 0;

      soma = independentes[i];
      for (int j = 0; j < ordem; j++)
        if (i != j) soma -= matriz[i][j]*velhos[j];

      coeficientes[i] = (1/matriz[i][i])*soma;
    }
  } while (continuar());
}

void seidel(){
  double soma, coeficiente;

  for (int i = 0; i < ordem; i++) velhos[i] = 0;

  do {
    for (int i = 0; velhos[i] = coeficientes2[i], i < ordem; i++);

    for (int i = 0; i < ordem; i++) {
      coeficiente = 0;

      soma = independentes[i];
      for (int j = 0; j < ordem; j++)
        if (i != j) soma -= matriz[i][j]*coeficientes2[j];

      coeficientes2[i] = (1/matriz[i][i])*soma;
    }
  } while (continuar2());
}
