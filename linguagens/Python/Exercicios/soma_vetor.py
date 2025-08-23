
qnumero = int(input("Quantos numeros deseja digitar ?"))
numero : float
soma = 0

vet: [float] = [0 for x in range(qnumero)]

for i in range(0, qnumero):
    vet[i] = float(input("Digite os numeros: "))
    soma  = soma + vet[i]

print()
print("Valores = ", end="")

for i in range(0 , qnumero):
    print(f"{vet[i]:.1f}", end=" ")

print()

print(f"Soma = {soma:.2f}")


media = soma// qnumero

print(f"Media: {media:.2f}")