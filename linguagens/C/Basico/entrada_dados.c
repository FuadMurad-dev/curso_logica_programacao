#include <stdio.h>
#include <string.h>

void limpar_entrada() {
	char c;
	while ((c = getchar()) != '\n' && c != EOF) {}
}


void ler_texto(char *buffer, int length) {
	fgets(buffer, length, stdin);
	strtok(buffer, "\n");
}



int main() {
	int idade;
	double salario, altura;
	char genero;
	char nome[50], nome2[50];

	printf("Digite a idade: ");
	scanf("%i", &idade); // scaf C) para a entrada de dados

	printf("Digite o valor do salario: ");
	scanf("%lf", &salario);

	printf("Digite o valor da atura: ");
	scanf("%lf", &altura);

	printf("DIgite o nome da pessoa1: ");
	limpar_entrada();
	ler_texto(nome1, 50); 
	
	printf("DIgite o nome da pessoa2: ");
	fgets(nome2, 50, stdin);  // entrada de dados com string


	printf("IDADE = %d\n", idade);
	printf("SALARIO = %.2lf\n", salario);
	printf("ALTURA = %.2lf\n", altura);

	printf("nome1 = %s\n", nome);
	printf("nome2 = %s\n", nome2);
	return 0;
}