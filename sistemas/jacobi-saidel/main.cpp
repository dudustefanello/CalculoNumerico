#include <unistd.h>
#include <signal.h>
#include <iostream>
#include <string.h>
#include "jacobi.cpp"

using namespace std;

void imprimir(){
  if (linhas()) fprintf(arquivo, "A matriz não passou no criterio das linhas!\n");
  else fprintf(arquivo, "A matriz passou no criterio das linhas.\n\n");

  jacobi();
  seidel();

  fprintf(arquivo, "Gaus-Jacobi: \n");
  for (int i = 0; i < ordem; i++) {
    fprintf(arquivo, "%c = %3.5lf\n", varnomes[i], coeficientes[i]);
  }

  fprintf(arquivo, "\nGaus-Seidel: \n");
  for (int i = 0; i < ordem; i++) {
    fprintf(arquivo, "%c = %3.5lf\n", varnomes[i], coeficientes2[i]);
  }

  fprintf(arquivo, "\n");
  for (int i = 0; i < ordem; i++) {
    for (int j = 0; j < ordem; j++) {
      fprintf(arquivo, "%.1lf ", matriz[i][j]);
    }
    fprintf(arquivo, "%.1lf\n", independentes[i]);
  }

}

int main() {
  arquivo = fopen("saida.txt", "w");
  imprimir();

  fclose(arquivo);

  kill(getppid(), SIGKILL);
  return 0;
}
