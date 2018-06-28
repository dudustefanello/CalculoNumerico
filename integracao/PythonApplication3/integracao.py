import time

def funcao(x):
    return x ** 3 + x ** 2 + 5


def metodoTrapezio(n):
	somatorio = 0.0
	operacoes = 0.0

	h = (b - a) / n

	for i in range(n):
		x0 = a + (h * i)
		x1 = a + (h * (i + 1))
		somatorio += funcao(x0) + funcao(x1)
	
	somatorio = somatorio * (h / 2)

	return somatorio


def metodoSimpson(n):
    somatorio = 0.0
    operacoes = 0.0

    if n % 2 == 1:
        n += 1

    h = (b - a) / n

    for i in range(n - 2):
        xi = a + (h * i)
        if i % 2:
            somatorio += 4 * funcao(xi)
        else:
            somatorio += 2 * funcao(xi)

    somatorio += funcao(a) + funcao(b)
    somatorio = somatorio * (h / 3)

    return somatorio


a = 0.0
b = 1.0
n = 300000
# Resultado: 67/12

inicio = time.time()
print('Trapezios', metodoTrapezio(n))
final = time.time()
print(str(final - inicio)[:5], "segundos.\n\n")

inicio = time.time()
print('Simpson', metodoSimpson(n))
final = time.time()
print(str(final - inicio)[:5], "segundos.\n\n")