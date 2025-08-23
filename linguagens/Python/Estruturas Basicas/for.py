x: int 

soma: int

soma  = 0

x = int(input("Digite uma quantidade de numeros para começar: "))

for i in range( 0, x): # esse in range( 0, x ) é como se fosse 0 < x em cpp
    x = int(input("Digite outro numero: "))
    soma = soma + x

print("Soma = ", soma)