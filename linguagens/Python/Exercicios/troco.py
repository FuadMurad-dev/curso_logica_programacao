
preco  = float(input("Preço do Produto: "))
q = int(input("Quantidade de produtos comprados: "))
dinheiro = float(input("Quantidade de dinheiro: "))

troco =  dinheiro - (preco*q)

if troco < 0: 
    print("Dinheiro insufuciente")

else: 
    print(f"Valor do troco {troco:.2f}")