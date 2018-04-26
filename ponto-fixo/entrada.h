#define EPSON 0.00005


typedef struct{
  double x0;
  int f;
  char original[];
}tipoEntrada;

tipoEntrada entradas[] = {
  0.7, 1, "f(x) = cos(x) - x"
};
