#define EPSON 0.00001

typedef struct{
  double a, b;
  int f;
  char desc[100];
}tipoEntrada;

tipoEntrada entradas[] = {
// Intervalo - Função
   0.0, 0.5,   0, "f(x) = L * ((0.5 * PI) - arcsin(h) - h * pow((1 - h * h), 1/2)) - V",
   0.1, 1.0,   1, "f(x) = x^2 + ln(x)"
};
