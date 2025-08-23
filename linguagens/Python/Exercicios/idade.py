idade1: int 
idade2: int 
media: float

nome1: str
nome2: str
n: int 
somai: int 
somai = 0

n = int(input("Quantas pessoas vao ser: "))

veti: [int] = [0 for x in range(n)] #vetor para idade 
vetn: [str] = [0 for y in range(n)] # vetor para o nome



for i in range (0,n):

    vetn = input(f"Nome da pessoa {i + 1}: ")
    veti = int(input(f"Idade da  pessoa {i + 1}: "))

    somai = somai + veti

media = (somai)/n

print(f"A media das Pessoas é: {media}")
