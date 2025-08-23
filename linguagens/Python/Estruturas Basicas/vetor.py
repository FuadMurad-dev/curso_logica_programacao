N = int(print("Quantos numeros serao digitados? "))

vet: [float] = [0 for x in range(N)] # o float é o tipo do vetor, e o n é a quantidade de espacos que o vetor vai criar

print()
print("Numeros Digitados:")
for i in range(0,N): # for para percorer a quantidade de de espacos no vetor
    print(f"{vet[i]:.1f}") # esse .1f é para mostrar uma casa depois da virgula 

