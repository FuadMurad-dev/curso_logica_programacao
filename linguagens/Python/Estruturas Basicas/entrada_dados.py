salario1: float; salario2: float
nome1: str; nome2: str
idade: int
sexo: str

nome1 = input("Nome da Primeira pessoa:") #tomar cuidado que se eu nao colocar a especificacao ele entende como string(str)
salario1 = float(input("Salario da Primeira pessoa:"))

nome2 = input("Nome da Segunda pessoa:")
salario2 = float(input("Salario da Segunda pessoa:"))

idade1 = int(input("Digite sua idade:"))
idade2 = int(input("Digite sua idade:"))

sexo1 = input("Digite seu sexo")
sexo2 = input("Digite seu sexo")

print(nome1, salario1, nome2, salario2, idade1, idade2, sexo1, sexo2)