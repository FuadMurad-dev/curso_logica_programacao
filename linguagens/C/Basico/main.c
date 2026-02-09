
#include <stdio.h>
#include <string.h>

int main()
{
	int idade;
	double altura;
	char genero;
	char nome[50];

	idade = 20;
	altura = 1.80;
	genero = 'M';
	strcpy(nome, "Fuad Murad");

	printf("Idade  = %d\n", idade);
	printf("Idade  = %.2lf\n", altura);
	printf("Genero = %c\n", genero);
	printf("Nome = %s\n", nome);
	printf("Fuad tem %d idade, %.2lf de altura, com o genero %c", idade, altura, genero); 

	return 0;
}