 entrada = [(0, 0.01),
            (1, 1.01),
            (2, 1.40),
            (3, 3.81),
            (4, 4.01),
            (5, 4.55),
            (6, 4.20)]

aproximacoes = []

#entrada = [(0.128, -20),
#           (0.134,  10),
#           (0.144,  70)]

X = 7

x  = 0
x2 = 0
xy = 0
y  = 0

n = len(entrada)

for i in range(n):
    x  += entrada[i][0]
    x2 += entrada[i][0] ** 2
    xy += entrada[i][0] * entrada[i][1]
    y  += entrada[i][1]

a = ((n * xy - x * y )/
     (n * x2 - x ** 2))

b = ((x2 * y - x * xy)/
     (n * x2 - x ** 2))


for i in range(n):
    aproximacaoes[i] = (a * i) + b

print(aproximacao)
print(aproximacoes)
