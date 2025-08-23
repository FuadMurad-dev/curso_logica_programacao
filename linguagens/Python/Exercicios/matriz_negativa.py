



m = int(input("Qual sera a ordem da matriz ?"))
soma = 0

matriz: [[int]] = [[0 for x in range(m)]for x in range(m)]


for i in range(0, m):
    for j in range (0,m):
        matriz[i][j] = int(input(f"Elemento [{i},{j}]: "))
        if matriz[i][j] < 0:
            soma = soma + 1


for i in range(0,m):
    print(f"Diagonal Pricipal: {matriz[i][i]} ")
        


print(f"Quantidade de negativos: {soma}")



