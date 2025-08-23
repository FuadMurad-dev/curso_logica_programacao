
x1 = int(input("Digite dois numeros: "))
x2 = int(input(""))
soma = 0 

if x1 > x2:  
    troca  = x1
    x1 = x2 
    x2 = troca


for i in range (x1 + 1 , x2):
     
    if i % 2 == 1:
        soma = soma + i;   



print (f"Soma dos impares: {soma}")