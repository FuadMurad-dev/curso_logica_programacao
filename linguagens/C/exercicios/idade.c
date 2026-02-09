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

int main()
{

	char nome1[50], nome2[50];
	int idade1, idade2;
	double media;

	printf("Nome da primeira pessoa: ");
	ler_texto(nome1, 50);

	printf("idade da primeira pessoa: ");
	scanf("%lf",&idade1);
	limpar_entrada();

	printf("Nome da segunda pessoa: ");
	ler_texto(nome2, 50);


	printf("idade da segunda pessoa: ");
	scanf("%lf",&idade2);


	media = (double) (idade1 + idade2) / 2;


	printf("A idade media de %s e de %s C) de %.2lf anos", nome1, nome2, media);

	return 0;
}