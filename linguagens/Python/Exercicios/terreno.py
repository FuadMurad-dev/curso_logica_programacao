largura: int 
comprimento: int
valor: int
area: int
preco: int   

largura = int(input("Digite a largura do seu terreno: "))
comprimento = int(input("DIgite o comprimento do se terreno: "))
valor = int(input("Digite o valor do metro quadrado: "))

area = largura * comprimento

preco = valor * area

print(f"Area do terreno: {area:.2f}")

print(f"Preço do terreno: {preco:.2f}")

