# entrada = [(1,  9),
#            (2, 11),
#            (3, 10),
#            (4, 13),
#            (5, 13),
#            (6, 14)]

entrada = [(0.128, -20),
           (0.134,  10),
           (0.144,  70)]

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

ab = (((n * xy) - (x * y))/
     ((n * x2) - (x ** 2)))

bb = (((x2 * y) - (x * xy))/
     ((n * x2) - (x ** 2)))

aproximacao = (ab * X) + bb

print(aproximacao)
