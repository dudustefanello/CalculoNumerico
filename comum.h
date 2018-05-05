typedef struct retorno{
  double y, erro;
  int iteracoes;
}retorno;

double erro(double a, double b){
  return fabs((a - b) / a);
}
