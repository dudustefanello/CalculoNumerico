import math

entrada = [(-1,  math.exp(-1)),
           (-1/2,  math.exp(-1/2)),
           (0, math.exp(0)),
           (1/2, math.exp(1/2)),
           (1, math.exp(1))]


diferencas = {}

diferencas.update({0: []})
for i in range(len(entrada) - 1):  
    diferencas[0].append((entrada[i + 1][1] - entrada[i][1])/
                         (entrada[i + 1][0] - entrada[i][0]))

k = 1
while k < len(entrada) - 1:
    for i in range(len(diferencas[k - 1]) - 1):
        if k not in diferencas:
            diferencas.update({k: []})
    
        diferencas[k].append((diferencas[  k - 1  ][i + 1] - diferencas[k - 1][i])/
                             (   entrada[i + k + 1][  0  ] -    entrada[  i  ][0]))
    k += 1

x = -0.8
p = entrada[0][1]

poli = str(p)[:7] + '+'

for i in range(len(diferencas)):
    k = 0
    r = 1
    while k <= i:
        r *= (x - entrada[k][0])
        if entrada[k][0] < 0:
            poli += '(x+' + str(entrada[k][0]*-1)[:7] + ')'
        else:
            poli += '(x-' + str(entrada[k][0])[:7] + ')'
        k += 1;
    p += r * diferencas[i][0]
    poli += '*' + str(diferencas[i][0])[:7]


print('Polinomio = ', str(p)[:10])
print(poli + '=' + str(p))
print('')
print('Euler:', math.exp(x))
print('')
print('Erro:', p - math.exp(x))
print('1--1', 1--1)