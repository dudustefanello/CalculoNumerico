#define EPSON 0.00001

typedef struct{
  double x0;
  int f;
  char original[50];
}tipoEntrada;

tipoEntrada entradas[] = {
  0, 1, "f(x) = x^2 + 10cos(x)",
  -3, 1, "f(x) = x^2 + 10cos(x)",
};
