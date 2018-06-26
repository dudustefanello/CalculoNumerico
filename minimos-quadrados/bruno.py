print("------- Aproximação pelo Método de Mínimos Quadrados Linear -------")
n = eval(input("Digite o número de pontos: "))

pontos = []
som_xi = 0
som_yi = 0
som_xiyi = 0
som_xi2 = 0

for i in range(n):
    x = eval(input("Preencha o valor de x: "))
    y = eval(input("Preencha o valor de f({}): ".format(x)))
    pontos.append((x, y))
    som_xi += x
    som_yi += y
    som_xiyi += x*y
    som_xi2 += x**2

b = ((som_xi2 * som_yi) - (som_xi * som_xiyi)) / ((n * som_xi2) - (som_xi ** 2))
a = ((n * som_xiyi) - (som_xi * som_yi)) / ((n * som_xi2) - (som_xi ** 2))

print("------------------------------")
print("------------------------------")
print("Pontos (x, y): {}".format(pontos))
print("------------------------------")
print("Som xi = {} | Som yi = {} | Som xi*yi = {} | Som xi^2 = {}".format(som_xi, som_yi, som_xiyi, som_xi2))
print("------------------------------")
print("Função g(x) = {}x + {}".format(a, b))
print("------------------------------")
print("------------------------------")

ponto_a_avaliar = eval(input("Preencha o ponto a avaliar: "))
aprx = (a*ponto_a_avaliar)+b

print("------------------------------")
print("------------------------------")
print("O valor aproximado de g(",ponto_a_avaliar,") é: ", aprx)


