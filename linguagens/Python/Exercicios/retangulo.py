base: float
altura: float 
area: int
perimetro: int
diagonal: float

base = float(input("Insira a base do Triangulo: "))
altura = float(input("Insira a altura do Triangulo: "))

area = (base * altura)
perimetro = base*2 + altura*2

diagonal = (base**2 + altura**2)**(1/2) 

print(f"Area: {area:.4f}")

print(f"Perimentro: {perimetro:.4f}")

print(f"diagonal: {diagonal:.4f}")

