print("------- Interpoção Polinomial (Método de Newton) -------")
n = eval(input("Digite o grau do polinômio a ser avaliado: "))+1

matriz = [0.0] * n
for i in range(n):
    matriz[i] = [0.0] * n

vetor = [0.0] * n

print(matriz)
print(vetor)
for i in range(n):
    x = eval(input("Preencha o valor de x: "))
    y = eval(input("Preencha o valor de f({}): ".format(x)))
    vetor[i]=float(x)
    matriz[i][0]=float(y)

print(vetor)    
print(matriz)

ponto_a_avaliar = eval(input("Preencha o ponto a avaliar: "))

print("------------------------------")
print("------- Calculando ... -------")
print("------------------------------")

for i in range(1,n):
    for j in range(i,n):
        print("i=",i,"    j=",j)
        print("(",matriz[j][i-1],"-",matriz[j-1][i-1],")/(",vetor[j],"-",vetor[j-i],")")
        matriz[j][i] = ( (matriz[j][i-1]-matriz[j-1][i-1]) / (vetor[j]-vetor[j-i]))
        print("matriz[",j,"][",i,"] = ",(matriz[j][i-1]-matriz[j-1][i-1])/(vetor[j]-vetor[j-i]))

print("------------------------------")
print("------------------------------")
for i in range(n):
    print(matriz[i])
print("------------------------------")
print("------------------------------")

aprx = 0
mul = 1.0
for i in range(n):
    print("matriz[",i,"][",i,"]","=",matriz[i][i])
    mul = matriz[i][i];
    print("mul antes do ciclo j=",mul)
    for j in range(1,i+1):
        mul = mul * (ponto_a_avaliar - vetor[j-1])
        print("mul no ciclo j=",mul)
    aprx = aprx + mul

print("------------------------------")
print("------------------------------")
print("O valor aproximado de f(",ponto_a_avaliar,") é: ", aprx)

