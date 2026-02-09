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

	
	double nota1, nota2, media; 
	
	
	printf("nota da primeira pessoa: ");
	scanf("%lf",&nota1);

	printf("nota da segunda pessoa: ");
	scanf("%lf",&nota2);


	media = (double) (nota1 + nota2) / 2;

	printf("A nota media é de %.2lf\n", media);
    
    if(media >= 60)
    {
        printf("Aprovado"); 
    }
    else
        printf("Reprovado"); 
    
	return 0;
}