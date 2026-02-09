#include <stdio.h>
#include <string.h>
#include <math.h>

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


	double a, b, c, x1, x2, delta;


	printf("valor de a: ");
	scanf("%lf",&a);

	printf("valor de b: ");
	scanf("%lf",&b);

	printf("valor de c: ");
	scanf("%lf",&c);


	delta = (b*b) - (4 * (a *c)) ;

	x1 = (-b + sqrt(delta)) / (2*a);

	x2 = (-b - sqrt(delta)) / (2*a);


	printf("valor de x1 C):  %.2lf\n", x1);
	printf("valor de x2 C):  %.2lf\n", x2);

	return 0;
}